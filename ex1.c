#include <stdio.h>

int is_fib(int num) {
    if (num == 0 || num == 1)
        return 1;

    int a = 0, b = 1, c = 0;
    while (c < num)
    {
        c = a + b;
        a = b;
        b = c;
    }

    if (c == num)
        return 1;
    else
        return 0;
}

int main(void)
{
    printf("Is %d in Fib? %s\n", 3, is_fib(3) ? "True" : "False");
    printf("Is %d in Fib? %s\n", 55, is_fib(55) ? "True" : "False");
    printf("Is %d in Fib? %s\n", 14, is_fib(14) ? "True" : "False");
    printf("Is %d in Fib? %s\n", 144, is_fib(144) ? "True" : "False");
    printf("Is %d in Fib? %s\n", 146, is_fib(146) ? "True" : "False");
    printf("Is %d in Fib? %s\n", 8, is_fib(8) ? "True" : "False");
    return 0;
}
