#include<stdio.h>
int main(){
    int inputNum,sum=0,reminderDigit=0;
    puts("Enter an input number to calculate your lucky digit");
    scanf("%d",inputNum);
    while(inputNum>0){
        reminderDigit=inputNum%10;
        sum=sum+reminderDigit;
        inputNum=inputNum/10;
        if(inputNum==0 & sum>9){
            inputNum=sum;
            sum=0;
            reminderDigit=inputNum%10;
            sum=sum+reminderDigit;
            inputNum=inputNum/10;
        }
    }
    printf("Your lucky digit is %d",sum);
}