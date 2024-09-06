#include <stdio.h>
void main(void)
{
   float n1,n2;
   char op;
   printf("enter number operator number:");
   scanf("%f %c %f",&n1,&op,&n2);
   switch(op)
   {
   case'+':
    printf("%f+%f=%f",n1,n2,n1+n2);
    break;
   case'-':
    printf("%f-%f=%f",n1,n2,n1-n2);
    break;
   case'*':
    printf("%fx%f=%f",n1,n2,n1*n2);
    break;
   case'/':
    printf("%f/%f=%f",n1,n2,n1/n2);
    break;
   default:
    printf("unknown operator");
    }
}
