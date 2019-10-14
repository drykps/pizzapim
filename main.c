#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, const char * argv[]){

	fflush(stdin);

    sistema_inicio();

	//menu_principal();

	return 0;

}

void sistema_inicio(){

    char senha[20]="12345";
    char senha1[20];
    char login[20]="pizzap";
    char login1[20];

    system("cls");
    printf("Login:");
    scanf("%s", &login1);
    printf("senha:");
    scanf("%s", &senha1);

    if((strcmp(login1,login)==0)&&(strcmp(senha1,senha)==0)){
        return menu_principal();
    }
    else{
        int opcao;

        system("cls");
        printf("\t\n");
        printf("senha ou login invalido!\n");
        printf("\t=============================\n");
        printf("\t=+= DESEJA NOVO CADASTRO? =+=\n");
        printf("\t=============================\n");
        printf("\t=+= [1] SIM =+=\n");
        printf("\t=+= [0] NAO =+=\n");
        printf("\tOpcao : "); scanf("%d", &opcao);
        printf("\t=============================\n");

        switch(opcao){
        case 1:
            cadastro_senha();
            break;
        case 0:
            sistema_inicio();
            break;
        default:
            sistema_inicio();
            break;
        }
    }
}
void cadastro_senha(){

    char novolog[20];
    char senhan[20], senhan1[20];
    system("cls");
	printf("\t\n");
    printf("\t=============================\n");
    printf("\t=+=CADASTRO=+=\n");
    printf("\t=============================\n");
    printf("\t Digite novo login:"); scanf("%s", novolog);
    printf("\t Digite nova senha:"); scanf("%s", senhan);
    printf("\t Digite a senha novamente:"); scanf("%s", senhan1);

    if(strcmp(senhan1, senhan)==0){
        printf("\n\nCadastro efetuado com sucesso!");
        return sistema_inicio();
    }
    else{
        printf("\n\nSenha invalida!");
        // colocar tempo para execução seguinte
        return cadastro_senha();

    }
    }


void menu_principal(){
    system("cls");
	int opcao;
	printf("\t\n");
	printf("\t=============================\n");
	printf("\t=+= Bem-Vindo ao Pizza Pim =+=\n");
	printf("\t=============================\n");
	printf("\t=+= SELECIONE UMA OPCAO   =+=\n");
	printf("\t=============================\n");
	printf("\t=+= [1] Cadastros         =+=\n");
	printf("\t=+= [2] Relatorios        =+=\n");
	printf("\t=+= [3] Caixa             =+=\n");
	printf("\t=+= [0] Sair              =+=\n");
	printf("\t=============================\n");
	printf("\tOpcao : "); scanf("%d", &opcao);
	printf("\t=============================\n");

	switch(opcao){
		case 0:
			menu_sair();
			break;
		case 1:
			menu_cadastros();
			break;
		case 2:
			menu_relatorios();
			break;
		case 3:
			menu_caixa();
			break;
		default:
			system("cls");
			menu_principal();
			break;
	}

}
void menu_sair(){

	int opcao;

	system("cls");
	printf("\t\n");
	printf("\t===============================\n");
	printf("\t=+= DESEJA REALMENTE SAIR ? =+=\n");
	printf("\t===============================\n");
	printf("\t=+= [1] NAO                 =+=\n");
	printf("\t=+= [0] SIM                 =+=\n");
	printf("\t===============================\n");
	printf("\tOpcao : "); scanf("%d", &opcao);
	printf("\t===============================\n");

	switch(opcao){
		case 0:
			system("cls");
			printf("\t\n");
			printf("\t==================================\n");
			printf("\t=+= Obrigado por usar Pizza Pim =+=\n");
			printf("\t==================================\n");
			break;
		case 1:
			system("cls");
			menu_principal();
			break;

	}
}
void menu_cadastros(){

	int opcao;

	system("cls");
	printf("\t\n");
	printf("\t=============================\n");
	printf("\t=+=       CADASTROS       =+=\n");
	printf("\t=============================\n");
	printf("\t=+= SELECIONE UMA OPCAO   =+=\n");
	printf("\t=============================\n");
	printf("\t=+= [1] CLIENTES          =+=\n");
	printf("\t=+= [2] PIZZAS            =+=\n");
	printf("\t=+= [0] Voltar            =+=\n");
	printf("\t=============================\n");
	printf("\tOpcao : "); scanf("%d", &opcao);
	printf("\t=============================\n");

	switch(opcao){
		case 0:
			system("cls");
			menu_principal();
			break;
		case 1:
			cadastro_cliente();
			break;
		case 2:
			cadastro_pizzas();
			break;
		default:
			menu_cadastros();
			break;
	}

}
void cadastro_cliente(){

	int opcao;

	system("cls");
	printf("\t\n");
	printf("\t=============================\n");
	printf("\t=+=       CLIENTES        =+=\n");
	printf("\t=============================\n");
	printf("\t=+= SELECIONE UMA OPCAO   =+=\n");
	printf("\t=============================\n");
	printf("\t=+= [1] VISUALIZAR        =+=\n");
	printf("\t=+= [2] CADASTRAR         =+=\n");
	printf("\t=+= [3] EDITAR            =+=\n");
	printf("\t=+= [0] Voltar            =+=\n");
	printf("\t=============================\n");
	printf("\tOpcao : "); scanf("%d", &opcao);
	printf("\t=============================\n");

	switch(opcao){
		case 0:
			system("cls");
			menu_cadastros();
			break;
		case 1:

			break;
		case 2:
            cadastro_c();
			break;
        case 3:

            break;
		default:
			cadastro_cliente();
			break;
	}

}
void cadastro_c(){
static int linha;
    char nome[30];
    char endereco[50];
    char telefone[15];
    int op;
        do{
        system("cls");
        printf("\t\n");
        printf("\t=============================\n");
        printf("\t=+=       CADASTRO       =+=\n");
        printf("\t=============================\n");
        printf("\nInforme o nome do cliente:");
        scanf("%s", &nome[linha]);
        printf("\nEndereco:");
        scanf("%s", &endereco[linha]);
        printf("\nTelefone:");
        scanf("%s", &telefone[linha]);
        printf("\nDigite 1 para continuar ou qualquer outro numero para sair: ");
        scanf("%d", &op);
        linha++;

    }   while(op==1);
}



void cadastro_pizzas(){
	int opcao;

	system("cls");
	printf("\t\n");
	printf("\t=============================\n");
	printf("\t=+=       PIZZAS          =+=\n");
	printf("\t=============================\n");
	printf("\t=+= SELECIONE UMA OPCAO   =+=\n");
	printf("\t=============================\n");
	printf("\t=+= [1] VISUALIZAR        =+=\n");
	printf("\t=+= [2] CADASTRAR         =+=\n");
	printf("\t=+= [3] EDITAR            =+=\n");
	printf("\t=+= [0] Voltar            =+=\n");
	printf("\t=============================\n");
	printf("\tOpcao : "); scanf("%d", &opcao);
	printf("\t=============================\n");

	switch(opcao){
		case 0:
			system("cls");
			menu_cadastros();
			break;
		case 1:

			break;
		case 2:

			break;
		default:
			cadastro_pizzas();
			break;
	}
}
void menu_relatorios(){
	int opcao;

	system("cls");
	printf("\t\n");
	printf("\t=============================\n");
	printf("\t=+=       RELATORIOS      =+=\n");
	printf("\t=============================\n");
	printf("\t=+= SELECIONE UMA OPCAO   =+=\n");
	printf("\t=============================\n");
	printf("\t=+= [1]                   =+=\n");
	printf("\t=+= [2]                   =+=\n");
	printf("\t=+= [3]                   =+=\n");
	printf("\t=+= [0] Voltar            =+=\n");
	printf("\t=============================\n");
	printf("\tOpcao : "); scanf("%d", &opcao);
	printf("\t=============================\n");

	switch(opcao){
		case 0:
			system("cls");
			menu_principal();
			break;
		case 1:

			break;
	}
}
void menu_caixa(){

	int opcao;

	system("cls");
	printf("\t\n");
	printf("\t=============================\n");
	printf("\t=+=         CAIXA         =+=\n");
	printf("\t=============================\n");
	printf("\t=+= SELECIONE UMA OPCAO   =+=\n");
	printf("\t=============================\n");
	printf("\t=+= [1]                   =+=\n");
	printf("\t=+= [2]                   =+=\n");
	printf("\t=+= [3]                   =+=\n");
	printf("\t=+= [0] Voltar            =+=\n");
	printf("\t=============================\n");
	printf("\tOpcao : "); scanf("%d", &opcao);
	printf("\t=============================\n");

	switch(opcao){
		case 0:
			system("cls");
			menu_principal();
			break;
		case 1:

			break;
	}
}


