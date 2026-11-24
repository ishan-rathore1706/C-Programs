#include <stdio.h>
int sumofsquareofdigits(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+(n%10)*(n%10);
        n/=10;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter a number ");
     scanf("%d",&n);
int x=n;
     while(n!=1&&n!=4)
     {
        n=sumofsquareofdigits(n);
     }
        if(n==1)
        {
            printf("%d is a Happy number",x);
            
        }
        else if(n==4)
{
             printf("%d is not a Happy number",x);
             
        }
     }

