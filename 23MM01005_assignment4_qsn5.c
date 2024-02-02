#include<stdio.h>
int main()
{
    int n;
    printf("Enter a three digit number ");
    scanf("%d",&n);
    if(n>999||n<100)
    {
        printf("\nIncorrect Input ");
        return 0;
    }
    int d,temp,sum=0;
    temp=n;
    while(n>0)
    {
        d=n%10;
        n/=10;
        sum+=(d*d*d);
    }
    if(sum==temp)
        printf("%d is an armstrong number ",temp);
    else
        printf("%d is not an armstrong number ",temp);    
    return 0;
}