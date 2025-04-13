//8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fact(int);
int combination(int,int);
void Pascal(int);
int main()
{
    int row;
    printf("Enter number of line to print pascal triangle:\n");
    scanf("%d",&row);
    Pascal(row);
}
void Pascal(int row)
{
    int i,j,k,r;
    //combination(row,col);
    for(i=1;i<=row;i++)
    {
        k=1; // flag
        r =0;
        for(j=1;j<=2*row-1;j++)
        {
            if(j>=row+1-i && j<=row-1+i&&k)
            {
               printf("%2d",combination(i-1,r));
               k=0;r++;
            }
            else
            {
                printf("  ");
                k=1;
            }
        }
        printf("\n");
    }
}
int combination(int n,int r)
{
    if(n>=r&&r>=0)
     return fact(n)/(fact(r)*fact(n-r));
}
int fact(int num)
{
    if(num==0||num==1)
      return 1;
    return num* fact(num-1);
}
