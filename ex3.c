#include <stdio.h>

int main(void)
{
    int i = 12;
    int k = 1;
    int soma = 0;

    while (k < i)
    {
        k++;
        soma += k;
    }

    printf("%d", soma);
}
