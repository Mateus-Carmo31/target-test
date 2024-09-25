#include <stdio.h>

int readAs(const char* text)
{
    if (text == NULL)
        return 0;

    int count = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == 'a' || text[i] == 'A')
            count++;
    }

    return count;
}

int main(void)
{
    char string[] = "Essa aqui é uma string de teste!";

    printf("String: \"%s\"\n", string);

    int as = readAs(string);
    if (as > 0)
        printf("Na string acima, a letra \"a\" aparece %d vezes.\n", as);
    else
        printf("Na string acima, a letra \"a\" não aparece nenhum vez.\n");
   
    return 0;
}
