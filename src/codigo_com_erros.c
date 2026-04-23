#include <stdio.h> // Corrige importação da biblioteca stdio

int main() {
    float nota1, nota2, media; // Adiciona ponto e vírgula no final da declaração de floats 

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    if (nota1 < 0 || nota1 > 10) { // Adiciona validação do input das variáveis nota1 e nota2
        printf("Digite uma nota entre 0 e 10.\n");
        return 0;
    }

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); // Adiciona & para indicar corretamente o ponteiro nota2

    if (nota2 < 0 || nota2 > 10) {
        printf("Digite uma nota entre 0 e 10.\n");
        return 0;
    }

    media = (nota1 + nota2) / 2; // Adiciona parênteses para cálculo correto da média    

    if (media >= 6) { // Corrige uso correto do operador de comparação
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}