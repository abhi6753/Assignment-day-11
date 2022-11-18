//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
#include<conio.h>
int HCF(int,int);
int main()
{
    int a,b,hcf;
    printf("Enter two numbers get its HCF:\n");
    scanf("%d%d",&a,&b);
    printf("HCF of %d and %d is %d",a,b,HCF(a,b));
    getch();
    return 0;
}
int HCF(int a, int b)
{
    int i;
    for(i=a<b?a:b;i<=a<b?a:b;i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i ;
        }
    }
}