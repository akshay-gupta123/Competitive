#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int i, b;
    scanf("%d\n%d", &i, &b);
       for(int a=i;a<=b;a++)
       {
        if(a<=9)
    {
        if(a==1)
        printf("one");
        else if(a==2)
        printf("two");
        else if(a==3)
        printf("three");
        else if(a==4)
        printf("four");
        else if(a==5)
        printf("five");
        else if(a==6)
        printf("six");
        else if(a==7)
        printf("seven");
        else if(a==8)
        printf("eight");
        else
        printf("nine");
        printf("\n");
    } 
    else if(a%2==0)
    printf("even\n");
    else 
    printf("odd\n");

       }
  

    return 0;
}



