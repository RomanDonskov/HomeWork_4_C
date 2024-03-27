// Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a
// до b.
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int i, a, b,res;
    res = 0;
    while (1)
    {
        printf("Введите 2 целых числа a ≤ b через пробел: ");
        scanf("%d %d", &a, &b);
        if (a<=b) break;
    }
    
    for (i=a; i<=b; i++) 
    {
        res+=i*i;
    }
       
    printf("Сумма квадратов чисел от %d до %d: %d", a, b, res);
    return 0;
}
