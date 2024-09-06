#include<stdio.h>
#include<math.h>
void main(void)
{
    int n,d1,d2,d3,d4,num;
    printf("enter a four digit number:");
    scanf("%d",&n);
    num=n;
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d4=n%10;
    if ((pow(d1,4))+pow(d2,4)+pow(d3,4)+pow(d4,4)==num)
    {
        if ((d1==d4)&&(d2==d3))
        {
            printf("this number is armstrong and palendrome");
        }
        else printf("this number is armstrong only");
        
    }
    else printf("this number is neither armstrong nor palendrome");
    
    






}