#include<stdio.h>
int main()
{
   int i=0;
   int n1=0;
   int n2=0;
   scanf("%d",&n2);
   while(n2!=0)
   {
     n1=n2%2;
     n2=n2/2;
     if (n1==1)
    i=i+1;
 }
printf("%d\n",i);
return 0;
}