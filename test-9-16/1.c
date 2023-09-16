#include<stdio.h>
#include<windows.h>
int main()
{
    int age = 0 ;
    printf("请输入你的年龄\n");
    scanf("%d",&age);
    if (age<18 && age>10)
    {
        printf("少年\n");
    }
    else if (age<=10 && age>7)
    {    
        printf("小屁孩\n");
    }
    else if (age>=18 && age<30)
    {
        printf("青年\n");
    }
    else if (age>=30 && age<60)
    {
        printf("壮年\n");
    }
    else if (age>=60 && age<90)
    {
        printf("老年\n");
    }
    else
        printf("老不死的\n");

    int b = 0;
    system ("pause");        
    return 0 ;

}