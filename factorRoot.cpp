#include <stdio.h>
#include <cstdlib>
void simplifyRoot(int value)
{
    int simplifiedRadicand = value;
    int factor = 2;
    int root = 1;
    while (factor <= simplifiedRadicand)
    {
        if (simplifiedRadicand % (factor*factor) == 0)
        {
            simplifiedRadicand /= (factor * factor);
            root *= factor;            
        } else 
        {
            factor++;
        }
    }
    printf("Raiz: %d", root);
    if (simplifiedRadicand!=1) printf(", Radicando: %d    ", simplifiedRadicand);
}
int main(int argc, char const *argv[])
{
    printf("Insira radicando a ser simplificado:");
    int teste;
    scanf("%d", &teste);
    simplifyRoot(teste);
    printf("\n");
    system("PAUSE");
    return 0;
}