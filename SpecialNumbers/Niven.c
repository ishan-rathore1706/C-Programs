#include <stdio.h>

    int sumofdigits(int n)
    {
        int sum=0;
        while(n!=0)
        {
             sum=sum+n%10;
             n/=10;
        }
     return sum;
    }
    int main()
    {
        int n;
        printf("Enter a number ");
        scanf("%d",&n);

        if(n%sumofdigits(n)==0)
        printf("%d is  niven numver ",n);

        else
        printf("%d is not niven number ",n);

    }
