#include<stdio.h>
#include<windows.h>
int main()
{
    int a = 1 ;
    while (a<101)
    {
        if(a%2 == 1)
            printf ("%d ",a);
        a++;
    }
    system("pause");
    return 0 ;
}