
#include <stdio.h>
#include <string.h>
int main()
{
    char str[5];

    printf("Enter a string: ");
    scanf("%3s ", str);

    printf("The string is:  %s", str);
    printf("The length of string is %d",strlen(str));
    
    return 0;
}
