// WAP of Reverse of Digits

#include <stdio.h>
#include <conio.h>
int main()
{
    int n,reverse=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        reverse=reverse*10;
        reverse=reverse+n%10;
        n=n/10;
    }
    printf("Reverse of given number is: %d\n",reverse);
    getch();
    return 0;

}