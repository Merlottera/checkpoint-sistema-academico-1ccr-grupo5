#include<stdio.h>


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
    } // Adicionando tratativa de entrada de dados
    
    return 0;
}