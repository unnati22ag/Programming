#include <stdio.h>
#include<conio.h>
void main(){
int a;
printf("enter  the marks ");
scanf("%d",&a);
if(a>=60&a>=100)
{
    printf("1st division");
}
 else if(a<60&a>=45){
    printf("2nd division");
            }
  else if(a<45&a>=33){
            printf("3rd division");
        }
else{
            printf("fail");
        }
            getch();
        }
