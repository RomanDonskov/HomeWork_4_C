// Ввести натуральное число и напечатать все числа от 10 до введенного числа -
// у которых сумма цифр равна произведению цифр
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a,i,sum,mult,num;
    printf("Введите целое число: ");
    scanf("%d", &a);
    for (i = 10; i <= a; i++)
    {
        sum = 0;
        mult = 1;
        num = i;
        while (num)
        {
            sum+=num%10;
            mult*=num%10;
            num = num/10;
        }
        if (sum == mult)
        {
            printf("%d, ", i);
        }
    }
return 0;
}
