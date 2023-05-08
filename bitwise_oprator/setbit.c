#include<stdio.h>
int main(){

int n,pos,result;
printf("Enter a no\n");
scanf("%d",&n);
printf("Enter a postion you want to shift\n");
scanf("%d",&pos);

//n=n | 1<<pos;  set bit
//n=n & ~(1<<pos); clear bit
//n=n^(1<<pos);  toggle a bit
result=n &1<<pos;

if(result!=0){
    printf("bit is set");

}
else{
    printf("bit is clear");
}
//printf("%d",n);

}
