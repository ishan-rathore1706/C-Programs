#include <stdio.h>
#include <string.h>
  int main()
     {
           char str[100];
          printf(" Enter a string ");
           scanf(" %[^\n]",str);
            
           for(int i=0;i<strlen(str);i++)
           {
            printf("%s ",str);
           }
     }
