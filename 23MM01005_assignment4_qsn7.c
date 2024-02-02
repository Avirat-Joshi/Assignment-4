#include<stdio.h>
int main()
{
    int age;
    printf("Enter age ");
    scanf("%d",&age);
    if(age<5)
        printf("\nFree Entry!!!!");
    if(age>=5&&age<12)
        printf("\nTicket rate is 20");
    if(age>=12&&age<60)
        printf("\nTicket rate is 50");
    if(age>=60)
        printf("\nTicket rate for senior citizens is 40");    
    return 0;
}