#include<stdio.h>
int main()
{
    unsigned int a=1;
    unsigned int C = 0 - 1;
    int b=0;
    while(a !=0) {
        a=a<<1;
        b=b+1;
    }
    printf("a=%d",b);
    printf("c=%u\n", C);
    return 0;
}        






