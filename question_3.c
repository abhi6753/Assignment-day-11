//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
#include<conio.h>
short check(int );
int main()
{
    int num;
    printf("Enter number to check it's prime or not:\n");
    scanf("%d",&num);
    check(num)?printf("%d is a prime number",num):printf("%d is not a prime number",num);
    getch();
    return 0;
}
short check(int num)
{
    int i;
    short flag=1;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag = 0;
            return flag;
        }
        
    }
    return flag;
}