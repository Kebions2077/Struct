#include <stdio.h>
#include <string.h>

float cal_ter(float salario);
float cal_sal_ferias(float ter, float salario);
float cal_decimo(float salario, int t_trabalhado);

float cal_ter(float salario) {
    return salario / 3;
}

float cal_sal_ferias(float ter, float salario) {
    return ter + salario;
}

float cal_decimo(float salario, int t_trabalhado) {
    return (salario / 12) * t_trabalhado;
}

struct cadastro {
    long int numero_usuario;
    char nome[30];
};

int main(void) {
    float salario = 0, sal_ferias, decimo, ter;
    int op, t_trabalhado = 0, t_ferias;
    struct cadastro funcionario;
    
    printf("Digite o numero do funcionario:\n");
    scanf("%li", &funcionario.numero_usuario);
    printf("Digite o nome do funcionario:\n");
    while (getchar() != '\n'); // Limpa o buffer do teclado
    fgets(funcionario.nome, 30, stdin);
    funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0'; // Remove a quebra de linha
    
    printf("--------Calculo RH---------\n");
    printf("1) Calculo De Ferias\n");
    printf("2) Calculo de 13º \n");
    printf("3) Sair\n");
    printf("---------------------------\n");
    printf("Selecione a opção:\n");
    scanf("%i", &op);
    
    switch(op) {
        case 1:
            printf("------Calculo de ferias-----\n");
            printf("Digite quanto tempo voce trabalhou (em meses):\n");
            scanf("%i", &t_trabalhado);
            
            if(t_trabalhado >= 12) {
                printf("Digite seu salario:\n");
                scanf("%f", &salario);
                ter = cal_ter(salario);
                sal_ferias = cal_sal_ferias(ter, salario);
                printf("Voce Pode Tirar ferias e ira Receber: R$ %.2f\n", sal_ferias);
            } else {
                int resta = 12 - t_trabalhado;
                printf("Faltam %i meses para voce tirar ferias\n", resta);
            }
            break;
            
        case 2:
            printf("----Calculador de 13º---\n");
            printf("Digite seu salario:\n");
            scanf("%f", &salario);
            printf("Digite quantos meses trabalhou este ano:\n");
            scanf("%i", &t_trabalhado);
            decimo = cal_decimo(salario, t_trabalhado);
            printf("Valor do Decimo à Receber: %.2f\n", decimo);
            break;
            
        case 3:
            printf("Saindo...\n");
            break;
            
        default:
            printf("Opção inválida!\n");
    }
    
    return 0;
}