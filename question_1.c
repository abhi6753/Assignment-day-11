//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
#include<conio.h>
int LCM(int,int );
int main()
{
    int a,b,lcm;
    printf("Enter two number to get its LCM:\n");
    scanf("%d%d",&a,&b);
    lcm = LCM(a,b);
    printf("LCM of %d and %d is %d",a,b,lcm);
    getch();
    return 0;
}
int LCM(int a,int b)
{
    int i;
    for(i=a>b?a:b;i<=a*b;i+=a>b?a:b)
    {
        if(i%a==0 && i%b ==0)
        {
            return i;
        }
    }
}