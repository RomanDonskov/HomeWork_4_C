//Ввести целое число и определить, верно ли, что в нём ровно 3 цифры
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a,i;
    printf("Введите целое число: ");
    scanf("%d", &a);
    do
    {
        i++;
        a=a/10;
    }
    while (a != 0);

    if (i==3)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}
