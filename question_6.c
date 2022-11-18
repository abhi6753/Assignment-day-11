//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
#include<conio.h>
void prime(int ,int);

int main()
{
    int a,b;
    printf("Enter two number to print prime number between them:\n");
    scanf("%d%d",&a,&b);
    printf("Prime number between %d and %d are:\n",a,b);
    prime(a,b);
    getch();
    return 0;
}
void prime(int a,int b)
{
   a++;
   int i,flag;
   while (a<b)
   {
       flag =1;
       for(i=2;i<=a/2;i++)
       {
           if(a%i==0)
           {
               flag = 0;
               break;
           }   
       }
       if(flag == 1)
         printf("%d ",a);
         a++;
   } 
}
