#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,r;
    printf("Enter the range for multiplication:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
         printf("%d\n",i*j);
        }
        printf("\n");
    }
    getch();
    return 0;

}
