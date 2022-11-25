#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,r;
    printf("How many number you want to print:");
    scanf("%d",&r);
    while(a<=r)
    {
        printf("%d\t",a);
        a++;
    }
    getch();
    return 0;
}
