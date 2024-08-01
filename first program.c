#include<stdio.h>
int main()
{
    int a,b,sum,sub,ope;
    printf("enter the a and b:");
    scanf("%d%d",&a,&b);
    printf("enter the ope:");
    scanf("%d",&ope);
    if(ope==1)
    {
        sum=a+b;
        printf("sum=%d",sum);
    }
    else if(ope==2)
    {
        sub=a-b;
        printf("sub=%d",sub);
    }
    return 0;
}
