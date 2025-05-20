#include <stdio.h>
#include <string.h>
#define tam 100

struct cadastro{
    char nome[30],email[30];
    char rua[30],complemento[30],bairro[30],cidade[30],estado[30],pais[30];
    int numero_casa,dia,mes,ano;
    long int telefone,cep;
    char obs[30];
};

struct cadastro agenda[tam];
int x = 0;

void preenche(void);
void busca_nasc(void);
void busca_alfabetica(void);
void imprime_dados_basicos(void);
void imprime_todos_dados(void);

void preenche(void){
    printf("Preenchimento De agenda:\n");
    for(x=0;x<tam;x++){
        printf("Nome:");
        fflush(stdin);
        fgets(agenda[x].nome,30,stdin);
        printf("Email:\n");
        fflush(stdin);
        fgets(agenda[x].email,30,stdin);
        printf("Rua:\n");
        fflush(stdin);
        fgets(agenda[x].rua,30,stdin);
        printf("Complemento:\n");
        fflush(stdin);
        fgets(agenda[x].complemento,30,stdin);
        printf("Bairro:\n");
        fflush(stdin);
        fgets(agenda[x].bairro,30,stdin);
        printf("Cidade:\n");
        fflush(stdin);
        fgets(agenda[x].cidade,30,stdin);
        printf("Estado:\n");
        fflush(stdin);
        fgets(agenda[x].estado,30,stdin);
        printf("País:\n");
        fflush(stdin);
        fgets(agenda[x].pais,30,stdin);
        printf("Numero da casa:\n");
        scanf("%i",&agenda[x].numero_casa);
        printf("Data de nascimento dia:\n");
        scanf("%i",&agenda[x].dia);
        printf("Data de nascimento mes:\n");
        scanf("%i",&agenda[x].mes);
        printf("Data de nascimento ano:\n");
        scanf("%i",&agenda[x].ano);
        printf("CEP:\n");
        scanf("%li",&agenda[x].cep);
        printf("Telefone:\n");
        scanf("%li",&agenda[x].telefone);
        printf("Observação:\n");
        fflush(stdin);
        fgets(agenda[x].obs,30,stdin);
    }
}

void busca_nasc(void){
    int b_dia,b_mes;
    int encontrou = 0;
    printf("Digite a data de nascimento para buscar: Dia e Mes:\n");
    scanf("%i %i",&b_dia,&b_mes);
    for(x=0;x<tam;x++){
        if(b_dia == agenda[x].dia && b_mes == agenda[x].mes){
            printf("Nome:%s",agenda[x].nome);
            printf("Email:%s",agenda[x].email);
            printf("Telefone:%li\n",agenda[x].telefone);
            printf("Endereço: cep:%li,rua:%s,complemento:%s,bairro:%s,cidade:%s,estado:%s,país:%s",agenda[x].cep,agenda[x].rua,agenda[x].complemento,agenda[x].bairro,agenda[x].cidade,agenda[x].estado,agenda[x].pais);
            printf("Obs:%s\n",agenda[x].obs);
            encontrou = 1;
        }
    }
    if(!encontrou){
        printf("Nenhuma pessoa encontrada com esta data de nascimento:\n");
    }
}

void imprime_todos_dados(void){
    for(x=0;x<tam;x++){
        printf("Nome:%s",agenda[x].nome);
        printf("Email:%s",agenda[x].email);
        printf("Telefone:%li\n",agenda[x].telefone);
        printf("Endereço: cep:%li,rua:%s,complemento:%s,bairro:%s,cidade:%s,estado:%s,país:%s",agenda[x].cep,agenda[x].rua,agenda[x].complemento,agenda[x].bairro,agenda[x].cidade,agenda[x].estado,agenda[x].pais);
        printf("Obs:%s\n",agenda[x].obs);
    }
}

void imprime_dados_basicos(void){
    for(x=0;x<tam;x++){
        printf("Nome:%s",agenda[x].nome);
        printf("Email:%s",agenda[x].email);
        printf("Telefone:%li\n",agenda[x].telefone);
    }
}

void busca_alfabetica(void){
    int i,j;
    struct cadastro temp;
    for(i=0;i<tam-1;i++){
        for(j=0;j<tam-i-1;j++){
            if(strcmp(agenda[j].nome,agenda[j+1].nome)>0){
                temp=agenda[j];
                agenda[j]=agenda[j+1];
                agenda[j+1]=temp;
            }
        }
    }
    for(x=0;x<tam;x++){
        printf("Nome:%s",agenda[x].nome);
        printf("Email:%s",agenda[x].email);
        printf("Telefone:%li\n",agenda[x].telefone);
        printf("Endereço: cep:%li,rua:%s,complemento:%s,bairro:%s,cidade:%s,estado:%s,país:%s",agenda[x].cep,agenda[x].rua,agenda[x].complemento,agenda[x].bairro,agenda[x].cidade,agenda[x].estado,agenda[x].pais);
        printf("Obs:%s\n",agenda[x].obs);
    }
}

int main(void){
    int op;
    preenche();
    printf("---------Menu-----------\n");
    printf("1)Busca Por Data De Nascimento:\n");
    printf("2)Imprimir dados basicos:\n");
    printf("3)Imprimir Todos os dados:\n");
    printf("4)Ordenação alfabetica:\n");
    printf("Selecione uma opção:");
    scanf("%i",&op);
    switch(op){
        case 1:
            busca_nasc();
            break;
        case 2:
            imprime_dados_basicos();
            break;
        case 3:
            imprime_todos_dados();
            break;
        case 4:
            busca_alfabetica();
            break;
        default:
            printf("Opção invalida:\n");
    }
    return 0;
}