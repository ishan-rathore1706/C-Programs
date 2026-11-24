#include <stdio.h>
int countdigits(int n)
{
    int dig=0;
    while(n!=0)
{
    n/=10;
    dig++;
}
return dig;
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);

    int sq=n*n;
    int temp=0;
    int m=1;
    for(int i=1;i<=countdigits(n);i++)
    {
        temp=(sq%10)*m+temp;
        sq/=10;
        m*=10;
    }
    

    if(temp==n)
    printf("%d is an Automorphic number",n);

    else 
    printf("%d is not an Automorphic number",n);
}