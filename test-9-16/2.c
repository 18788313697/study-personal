#include<stdio.h>
#include<windows.h>
int main()
{
    char ch = 0 ;
    printf("你很闲吗？\n请输入(是的/不是):");
    scanf("%c\n",&ch);
    printf("你在说谎\n");
    system("pause");
    return 0 ;
}