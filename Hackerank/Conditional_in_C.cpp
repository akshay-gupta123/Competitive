#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int a;
    scanf("%d",&a);
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
    }
    else 
    printf("Greater than 9");

    return 0;
}
