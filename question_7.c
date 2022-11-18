//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
#include<conio.h>
void fib(int);
int main()
{
    int term;
    printf("How many term you want to print of Fibonacci series:\n");
    scanf("%d",&term);
    printf("%d term of Fibonacci series are:\n",term);
    fib(term);
    getch();
    return 0;
}
void fib(int term)
{
    int i =1,t1=-1,t2=1,t3;
    while(i<=term)
    {
       t3 = t1+t2;
       t1 = t2;
       t2 = t3;
       printf("%d ",t3); 
       i++;
    }

}