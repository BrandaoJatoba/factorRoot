#include <stdio.h>
#include <cstdlib>


void simplifyRoot(int value)
{
    int factor = 2;
    int simplifiedRadicand = value;
    int root = 1;
    int radicand = 1;
    while (factor <= simplifiedRadicand)
    {
        if (simplifiedRadicand % factor == 0)
        {
            simplifiedRadicand /= factor;

            if (simplifiedRadicand % factor == 0)
            {
                simplifiedRadicand /= factor;
                root *= factor;
            } else
            {
                radicand *= factor;
            }


        } else 
        {
            factor++;

        }
    }
    printf("Raiz: %d", root);
    if (radicand!=1) {printf(", Radicando: %d    ", radicand);}


}

int main(int argc, char const *argv[])
{
    printf("Insira radicando a ser simplificado:");
    int teste;
    scanf("%d", &teste);
    printf("\n");
    simplifyRoot(teste);
    printf("\n");
    system("PAUSE");
    return 0;
}
