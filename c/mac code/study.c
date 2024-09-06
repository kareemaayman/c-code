#include<stdio.h>
void main(void)
{
    int var1=100;
    int var2=200;

    const int *p=&var1;
    printf("%d\n",*p);
    p=&var2;
    printf("%d",*p);


}