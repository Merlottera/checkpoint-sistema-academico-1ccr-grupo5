#include <stdio.h> // Corrige importação da biblioteca stdio

int main() {
    float nota1, nota2, media; // Adiciona ponto e vírgula no final da declaração de floats 

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); // Adiciona & para indicar corretamente o ponteiro nota2

    media = (nota1 + nota2) / 2; // Adiciona parênteses para cálculo correto da média

    if (media = 6) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}