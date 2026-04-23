#include <stdio.h>

float num1, num2, media;

void inserir_notas() {
    printf("Insira a nota 1: ");
    scanf("%f", &num1);
    printf("Insira a nota 2: ");
    scanf("%f", &num2);
}

void calcular_media() {
    media = (num1 + num2) / 2;
}

void verificar_situacao() {
    if (media >= 6) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
}

void console(void){
    printf("==============================\n");  
    printf("     SISTEMA EQUIPE STIG4     \n"); 
    printf("==============================\n"); // Adicionando exibição do nome do programa
    printf("1 - Inserir notas\n");
    printf("2 - Calcular media\n");
    printf("3 - Verificar situacao\n");
    printf("4 - Exibir resultado\n");
    printf("5 - Calcular derivada\n");
    printf("6 - Sair\n");
    printf("Escolha uma opcao:\n");
    // Adicionando opcoes para usuario escolher
}




int main() {

    console();

    int number;
    scanf("%d", &number);

    if (number > 6 || number < 1){
        printf("Numero invalido");
        return 0;
    }

    } // Adiciona tratativa de entrada de dados
    
    return 0;
}
