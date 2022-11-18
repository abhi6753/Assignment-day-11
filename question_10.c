//10. Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the\
function.
#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
    int num=5;
    int sum=0;
    int i = 1;
    while(i<=num)
    {
       sum = sum+(fact(i)/i);
       i++;
    }
    printf("Result = %d",sum);
    getch();
    return 0;
}
int fact(int num)
{
    if(num==1||num==0)
    {
        return 1;
    }
    return num*fact(num-1);
}