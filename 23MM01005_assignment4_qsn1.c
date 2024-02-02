#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:
            printf("\nEven number");
            break;
        case 1:
            printf("\nOdd number");    
    }
    return 0;
}