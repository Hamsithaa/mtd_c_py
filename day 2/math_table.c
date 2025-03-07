#include<stdio.h>
int main(){
    int inputNum=0,i,b;
    puts("Enter a number to print it's math table");
    scanf("%d",&inputNum);
    for(i=1;i<=21;i++)
    {
       b=inputNum*i;
       printf("%d * %02d = %03d\n",inputNum,i,b);
    }
}