#include <stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    if (num%5==0)
    printf("THE NUMBER IS DIVISIBLE BY 5");
    else if(num%11==0)
    printf("THE NUMBER IS DIVISIBLE BY 11");
    else 
    printf("THE NUMBER IS NOT DIVISIBLE");
}