//Ввести целое число и определить, верно ли, что все его цифры четные
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
        if ((a%10)%2!=0)
        { 
            break;
        }
        else a=a/10;
    }
    while (a);
    
    (a==0)?printf("YES"):printf("NO");
    
    return 0;
}
