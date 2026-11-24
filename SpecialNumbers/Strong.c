#include <stdio.h>
    int fact(int n)
    {
        int fact=1;
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        return fact;
    }
    int main()
    {
        int n;
        printf("Enter a number ");
        scanf("%d",&n);
        int x=n;
        int c=0;

       while(x!=0)
       {
        c+=fact(x%10);
        x=x/10;
       }
       if(c==n)
       {
       printf("%d is a strong number",n);
       }
       else 
    { 
  printf("%d is not a strong number",n);
    }
    }