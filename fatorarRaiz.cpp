#include <stdio.h>
#include <cstdlib>

void fatorar(int radicando)
{
    int denominador = 2;
    int fatorar = radicando;
    int raiz = 1;
    int resto = 1;
    while (denominador <= radicando)
    {
        if (fatorar % denominador == 0)
        {
            fatorar = fatorar / denominador;

            if (fatorar % denominador == 0)
            {
                fatorar = fatorar / denominador;
                raiz *= denominador;
            } else
            {
                resto *= denominador;
            }


        } else 
        {
            denominador++;

        }
    }
    printf("%d // %d", raiz, resto);


}

int main(int argc, char const *argv[])
{
    int teste;
    scanf("%d", &teste);
    printf("Teste\n");
    printf("\n");
    fatorar(teste);
    system("PAUSE");
    return 0;
}
