struct Veiculos{
    char placa[10];
    char cor[15];
    int anoFabricacao;
    char modelo[20];
    char montadora[20];
    char dataUltimaManutencao[12];
    char dataProximaManutencao[12];
    int disponivelNoEstoque; //(1 se estiver, 0 se não)
    int emManutencao; //(1 se estiver, 0 se não)
    float valorDiaria;
};

struct ClienteFisico{

    char nome[30];
    char dN[12];
    char rg[20];
    char cpf[20];
    char telefone[15];
    char estado[20];
    char cidade[30];
    char cep[15];
    char endereco[200];
    int pendencia;
};

struct ClienteJuridico{
    char nomeFicticio[30];
    char razaoSocial[50];
    char cnpj[20];
    char ramoEmpresa[20];
};

struct AcessoriosParaCarro{
    char nomeDoAcessorio[30];
    float valorAcessorio;
};

struct RelacaoCarroCliente{
    char nomeCliente[30];
    char placaCarro[10];
    char dataRetirada[12];
    char dataEntrega[12];
    int numDeDiaria;
    int pago;//(1 se estiver, 0 se não)
};
