#include <stdio.h>
int main()
{
    int n;
    printf("Enter upto how many terms you want to print the fibonacci series");
    scanf("%d",&n);
  int a=0,b=1;
    while(n!=0)
    {
        int c=a+b;
        a=b;
        b=c;
        printf("%d ",  c  );
        n=n-1;
    }
    return 0;
}