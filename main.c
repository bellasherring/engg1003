#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int w;
    printf("this should print before you enter a number \n");
    scanf("%d", &x);
    printf("the number you entered is %d\n", x);
    scanf("%d", &w);
    printf("the other number is %d\n", w);
    return 0;
}
