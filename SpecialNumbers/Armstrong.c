#include <stdio.h>
int main()
{
    printf("Enter a number to check ");
    int n;
    scanf("%d",&n);

    int x=n;
    int t=0;

    while(x>0)
    {
        int y=x%10;
        t=t+y*y*y;
        x/=10;

    }
    if(t==n)
    printf("%d is an armstrong number", n);

    else
    printf("%d is not an armstrong number",n);
}