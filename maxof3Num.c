#include <stdio.h>
int main()
{
    int a,b,c;
    a=2;
    b=4;
    c=6;
      if (a>b>c){
        printf("a is max");
      }
      else if(b>a>c){
       printf("b is max");
      }
      else{
        printf("c ia max");    
      }
    printf("the max number is: %d",c);
      return 0;
}