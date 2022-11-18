//9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
#include<conio.h>
float power(float);
int main()
{
    float num;
    printf("Enter number to get its square:\n");
    scanf("%f",&num);
    printf("Square of %.2f is %.2f",num,power(num));
    getch();     // We can also find square of any number using predefined pow() function.
    return 0;
}
float power(float num)
{
    return num*num;
}