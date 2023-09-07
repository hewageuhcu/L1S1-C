
#include <stdio.h>

int main()
{
    int num, fac=1;
   printf("Enter Number :");
   scanf("%d",&num);
   while(num>=1)
    {
        fac=fac*num;
       num--;
        
    }
        
    printf("%d",fac);
   
}