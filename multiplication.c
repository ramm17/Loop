#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,num,r;
    printf("Enter any number for multiplication:");
    scanf("%d",&num);
    printf("Enter the range:");
    scanf("%d",&r);
    printf("\nMultiplication Table\n");
    while(a<=r)
    {
        printf("%d x %d = %d\n",num,a,num*a);
        a++;
    }
    getch();
    return 0;
}

