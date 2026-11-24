#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers to check if they are pythagorean triplets ");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a*a+b*b==c*c||(a*a+c*c==b*b)||(b*b+c*c==a*a))
    printf("%d %d %d are pythagorean triplets ", a,b ,c);


    else
     printf("%d %d %d are not pythagorean triplets ", a,b ,c);
}