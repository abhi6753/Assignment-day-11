//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
#include<conio.h>
void Prime(int);
int main()
{
    int num;
    printf("How many first N prime numbers you want to print:\n");
    scanf("%d",&num);
    Prime(num);
    getch();
    return 0;
}
void Prime(int num)
{
    int i=0,j,flag,k=2;
    while(i<num)
    {
        flag =1;
        for(j=2;j<=k/2;j++)
        {
           if(k%j==0)
           {
             flag =0;
             break;
           }
        }
        if(flag==1)
        {
          printf("%d ",k);
          i++;
        }
        k++; // counting number from 2;   
    }
}