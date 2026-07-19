#include <stdio.h>
int main(){
int a=0,b=1,c,i,n;
printf("enter the no. of elements in the series");
scanf("%d",&n);
printf("\n fibonnacci seiries is :");
for( i=1;i<=n;i++)
{
    printf("\t %d",a);
    c=a+b;
    a=b;
    b=c;
}
return 0;
}
