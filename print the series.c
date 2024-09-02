// To print the following series 

#include <stdio.h>
#include <conio.h>
int main()
{
    int num1=1,n;
    printf("Enter the last digit you want in series: ");
    scanf("%d",&n);
    do
    {
        printf("%d ",num1);
        num1++;
    } while (num1<=n);
    printf("\n");
    getch();
    
    return 0;
}
