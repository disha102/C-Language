# include <stdio.h>
#include <string.h> 
int main() 
{
  char str1[50]="hello";
  char str2[50]="world";
  strcat(str1,str2);
  printf("concatination of a string: %s",str1);
    return 0;
}