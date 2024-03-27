// Ввести целое число и «перевернуть» его, так чтобы первая цифра стала
// последней и т.д.
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a, rev_a;
    printf("Введите целое число: ");
    scanf("%d", &a);
    rev_a = 0;
    while (a)
    {
        rev_a = rev_a*10 + (a % 10);
        a = a/10;
    }
    printf("%d\n",rev_a);
    
    return 0;
}
