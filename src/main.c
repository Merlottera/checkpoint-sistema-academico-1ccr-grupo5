#include <stdio.h>

float num1, num2, media;

void inserir_notas()
{
    do
    {
        printf("Insira a nota 1: ");
        scanf("%f", &num1);

        printf("Insira a nota 2: ");
        scanf("%f", &num2);

        if (num1 < 0 || num1 > 10 || num2 < 0 || num2 > 10)
        {
            printf("Notas invalidas. Insira novamente.\n");
        }

    } while (num1 < 0 || num1 > 10 || num2 < 0 || num2 > 10);
}

void calcular_media()
{
    media = (num1 + num2) / 2;
    printf("Media calculada: %.2f\n", media);
}

void verificar_situacao()
{
    if (media >= 6)
    {
        printf("Situacao: Aprovado\n");
    }
    else
    {
        printf("Situacao: Reprovado\n");
    }
}

void exibir_resultado()
{
    printf("==============================\n");
    printf("  RESULTADO\n");
    printf("==============================\n");
    printf("Nota 1: %.2f\n", num1);
    printf("Nota 2: %.2f\n", num2);
    printf("Media:  %.2f\n", media);
    if (media >= 6)
    {
        printf("Situacao: Aprovado\n");
    }
    else
    {
        printf("Situacao: Reprovado\n");
    }
    printf("==============================\n");
}

void calcular_derivada()
{
    float a, b, c;
    printf("Informe o coeficiente a: ");
    scanf("%f", &a);
    printf("Informe o coeficiente b: ");
    scanf("%f", &b);
    printf("Informe o coeficiente c: ");
    scanf("%f", &c);
    printf("f'(x) = %.2fx + %.2f\n", 2 * a, b);
}

void sair()
{
    printf("Finalizando programa...\n");
}

void console(void)
{
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

int main()
{

    int flag = 1;

    do
    {
        console();

        int number;
        scanf("%d", &number);

        switch (number)
        {
        case 1:
            inserir_notas();
            break;
        case 2:
            calcular_media();
            break;
        case 3:
            verificar_situacao();
            break;
        case 4:
            exibir_resultado();
            break;
        case 5:
            calcular_derivada();
            break;
        case 6:
            sair();
            flag = 0;
            break;

        } // Cria estrutura switch case

        if (number > 6 || number < 1)
        {
            printf("Numero invalido");
            return 0;
        } // Adiciona tratativa de entrada de dados

    } while (flag != 0); // Cria estrutura do-while e variável flag para condição de saída do loop

    return 0;
}
