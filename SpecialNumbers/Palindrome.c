#include <stdio.h>
int main() 
{
    int n;
    printf("Enter a number to check ");
    scanf("%d",&n);

    int dup=n,pal=0;
    while(n>0)
    {
        int x=n%10;
        pal=pal*10+x;
        n/=10;

    }
    if(pal==dup)
    printf("%d is Palindrome",dup);

    else
    printf("%d is not palindrome",dup);
}