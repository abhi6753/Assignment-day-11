//4. Write a function to find the next prime number of a given number. (TSRS)
#include<conio.h>
#include<stdio.h>
int NextPrime(int);
int main()
{
    int num;
    printf("Enter number to print next prime number:\n");
    scanf("%d",&num);
    printf("Next prime number is %d",NextPrime(num));
    getch();
    return 0;
}
int NextPrime(int num)
{
    int i,flag;
    while(num++)
    {
        flag=1;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
               flag =0;
			   break;	
			}         
        }
        if(flag==1)
           return num;
    }
}
