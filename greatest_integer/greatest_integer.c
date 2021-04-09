#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        printf("the highest num is %d\n" , a);
    }
    else if(b > a && b > c && b > d)
    {
        printf("the highest num is %d\n" , b);
    }
    else if(c > a && c > b && c > d)
    {
        printf("the highest num is %d\n" , c);
    }
    else
    {
        printf("the highest num is %d\n" , d);
    }

    return 0;
}

int main(void)
{
    int a;
    int b;
    int c;
    int d;

    printf("please enter 4 numbers\n");

    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);
    scanf("%d" , &d);
    int function = max_of_four(a,b,c,d);
}

