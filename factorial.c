#include<stdio.h>
#include<conio.h>
int main()
{
    int num,fact=1,i;
    printf("Enter any number to find its factorial:");
    scanf("%d",& num);
    for(i=num;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("\n%d! = %d",num,fact);
    getch();
    return 0;
}
