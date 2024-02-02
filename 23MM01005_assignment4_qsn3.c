#include<stdio.h>
int main()
{   
    int balance,credit_score;
    float interest;
    printf("Enter credit score and current balance ");
    scanf("%d%d",&credit_score,&balance);
    if(credit_score<600)
        interest=balance*15/100;
    if(credit_score>=600 && credit_score<750)
        interest=balance*12/100;
    if(credit_score>=750)
        interest=balance*10/100;
    printf("Calculated interest is %.2f", interest);
    return 0;
}