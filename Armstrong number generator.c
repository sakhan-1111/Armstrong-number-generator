#include <stdio.h>
#include <conio.h>

int main()
{
    int n,r,s,t,min,max;

    printf("Enter the minimum range: ");
    scanf("%d",&min);

    printf("Enter the maximum range: ");
    scanf("%d",&max);

    printf("Armstrong numbers in the given range are: ");

	for(n=min; n<=max; n++){
         t = n;
         s = 0;

         while(t!=0){
             r=t%10;
             t=t/10;
             s=s+(r*r*r);
         }
         if(s==n){
			printf("%d ",n);}
    }
    return 0;
}