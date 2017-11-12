#include "stdio.h"
#include "conio.h"
#include "structspim.h"
#include "string.h"
struct ClienteFisico clientesFisicos[100];
int numTotalClienteFisico = 0;

struct ClienteJuridico clientesJuridicos[100];
int numTotalClienteJuridico = 0;
main()
{
    int op;

    while(op != 4){
        printf("*****SISTEMA PARA LOCACAO DE VEICULOS*****\n");
        printf("1 - Gerenciamento de cliente\n");
        printf("2 - Gerenciamento de veiculos\n");
        printf("3 - Gerenciamento de locacao de viculos\n");
        printf("4 - Fechar programa de gerenciamento\n");
        printf("Escolha uma da opcoes acima: ");
        scanf("%d",&op);

        if(op==1){
            system("cls");
            int gc;
            while(gc != 7){
                printf("***** GERENCIAMENTO DE CLIENTES *****\n");
                printf("1 - Cadastrar cliente fisico\n");
                printf("2 - Excluir clientes\n");
                printf("3 - Cadastrar empresa parceira\n");
                printf("4 - Excluir empresa parceira\n");
                printf("5 - Consultar clientes fisicos\n");
                printf("6 - Consultar empresas parceiras\n");
                printf("7 - Sair do menu gerenciamento de clientes\n");
                printf("Escolha uma das opcoes acima: ");
                scanf("%d",&gc);

                if(gc==1){

                    setbuf(stdin,NULL);
                    system("cls");

                    printf("***** CADASTRO DE CLIENTE FISICO *****\n");

                    printf("Informe o nome do cliente : ");
                    fgets(clientesFisicos[numTotalClienteFisico].nome,30,stdin);

                    printf("Informe a data de nascimento do cliente : ");
                    fgets(clientesFisicos[numTotalClienteFisico].dN,12,stdin);

                    printf("Informe o RG do cliente: ");
                    fgets(clientesFisicos[numTotalClienteFisico].rg,20,stdin);

                    printf("Informe o CPF do cliente: ");
                    fgets(clientesFisicos[numTotalClienteFisico].cpf,20,stdin);

                    printf("Informe o numero de telefone do cliente: ");
                    fgets(clientesFisicos[numTotalClienteFisico].telefone,15,stdin);

                    printf("Informe o Estado onde o cliente se encontra: ");
                    fgets(clientesFisicos[numTotalClienteFisico].estado,20,stdin);

                    printf("Informe a Cidade do cliente: ");
                    fgets(clientesFisicos[numTotalClienteFisico].cidade,30,stdin);

                    printf("Infome o CEP do cliente: ");
                    fgets(clientesFisicos[numTotalClienteFisico].cep,15,stdin);

                    printf("Infome o Endereco do cliente: ");
                    fgets(clientesFisicos[numTotalClienteFisico].endereco,200,stdin);

                    clientesFisicos[numTotalClienteFisico].pendencia = 0;
                    numTotalClienteFisico++;
                    printf("\nCliente cadastrado com sucesso, pressione um tecla para continuar...");

                    getch();
                    system("cls");
                }
                if(gc == 2){
                    system("cls");
                    int ecf;
                    int j;

                    printf("***** EXCLUSAO DE CLINTE *****\n");
                    printf("Informe o ID do cliente que deseja excluir: ");
                    scanf("%d",&ecf);

                    for(j=ecf-1; j<numTotalClienteFisico ;j++){

                        strcpy(clientesFisicos[j].nome, clientesFisicos[ecf].nome);
                        strcpy(clientesFisicos[j].dN, clientesFisicos[ecf].dN);
                        strcpy(clientesFisicos[j].rg, clientesFisicos[ecf].rg);
                        strcpy(clientesFisicos[j].cpf, clientesFisicos[ecf].cpf);
                        strcpy(clientesFisicos[j].telefone, clientesFisicos[ecf].telefone);
                        strcpy(clientesFisicos[j].estado, clientesFisicos[ecf].estado);
                        strcpy(clientesFisicos[j].cidade, clientesFisicos[ecf].cidade);
                        strcpy(clientesFisicos[j].cep, clientesFisicos[ecf].cep);
                        strcpy(clientesFisicos[j].endereco, clientesFisicos[ecf].endereco);
                        clientesFisicos[j].pendencia = clientesFisicos[ecf].pendencia;

                    }
                    numTotalClienteFisico--;
                    printf("Exclusao feita com sucesso\n");
                    printf("Pressione um tecla para continuar...");
                    getch();
                    system("cls");

                }
                if(gc==3){

                    setbuf(stdin,NULL);
                    system("cls");

                    printf("***** CADASTRO DE EMPRESA PARCEIRA *****\n");

                    printf("Informe o nome Fantasia : ");
                    fgets(clientesJuridicos[numTotalClienteJuridico].nomeFicticio,30,stdin);

                    printf("Informe a Razao social : ");
                    fgets(clientesJuridicos[numTotalClienteJuridico].razaoSocial,50,stdin);

                    printf("Informe o CNPJ: ");
                    fgets(clientesJuridicos[numTotalClienteJuridico].cnpj,20,stdin);

                    printf("Informe o Ramo da empresa: ");
                    fgets(clientesJuridicos[numTotalClienteJuridico].ramoEmpresa,20,stdin);

                    numTotalClienteJuridico++;
                    printf("\nCliente cadastrado com sucesso, pressione um tecla para continuar...");

                    getch();
                    system("cls");
                }
                if(gc == 4){
                    system("cls");
                    int ecj;
                    int j;

                    printf("***** EXCLUSAO DE EMPRESA PARCEIRA *****\n");
                    printf("Informe o ID da empresa que deseja excluir: ");
                    scanf("%d",&ecj);

                    for(j=ecj-1; j<numTotalClienteJuridico ;j++){

                        strcpy(clientesJuridicos[j].nomeFicticio, clientesJuridicos[ecj].nomeFicticio);
                        strcpy(clientesJuridicos[j].razaoSocial, clientesJuridicos[ecj].razaoSocial);
                        strcpy(clientesJuridicos[j].cnpj, clientesJuridicos[ecj].cnpj);
                        strcpy(clientesJuridicos[j].ramoEmpresa, clientesJuridicos[ecj].ramoEmpresa);

                    }
                    numTotalClienteJuridico--;
                    printf("Exclusao feita com sucesso\n");
                    printf("\nPressione um tecla para continuar...");
                    getch();
                    system("cls");

                }
                if(gc == 5){
                    system("cls");
                    int i;
                    for(i=0; i<numTotalClienteFisico; i++){

                        printf("***** CLIENTE %d *****\n",i+1);
                        printf("NOME: %s",clientesFisicos[i].nome);
                        printf("DATA DE NASCIMENTO: %s",clientesFisicos[i].dN);
                        printf("RG: %s",clientesFisicos[i].rg);
                        printf("CPF: %s",clientesFisicos[i].cpf);
                        printf("TELEFONE: %s",clientesFisicos[i].telefone);
                        printf("ESTADO: %s",clientesFisicos[i].estado);
                        printf("CIDADE: %s",clientesFisicos[i].cidade);
                        printf("CEP: %s",clientesFisicos[i].cep);
                        printf("ENDERECO: %s",clientesFisicos[i].endereco);

                        if(clientesFisicos[i].pendencia == 1){
                            printf("O cliente possui pendencias com a locadora, consultar menu de Gerenciamento de locacao\n\n");
                        }else{
                            printf("O cliente nao possui pendencias\n\n");
                        }
                    }
                    printf("Pressione um tecla para continuar...");
                    getch();
                    system("cls");
                }
                if(gc == 6){
                    system("cls");
                    int i;

                    printf("***** EMPRESAS PARCEIRAS *****\n");

                    for(i=0; i<numTotalClienteJuridico; i++){

                        printf("\n***** EMPRESA %d *****\n",i+1);
                        printf("NOME FANTASIA: %s",clientesJuridicos[i].nomeFicticio);
                        printf("RAZAO SOCIAL: %s",clientesJuridicos[i].razaoSocial);
                        printf("CNPJ: %s",clientesJuridicos[i].cnpj);
                        printf("RAMO DA EMPRESA: %s",clientesJuridicos[i].ramoEmpresa);
                    }
                    printf("\nPressione um tecla para continuar...");
                    getch();
                    system("cls");
                }


            }
        }
        system("cls");
    }


}
