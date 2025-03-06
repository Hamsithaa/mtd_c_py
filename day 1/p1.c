//accept a number from the user and check if it is even
#include<stdio.h>

int main(){
    int inputNum = 0;
    puts("Enter a number to check if it is Even");
    scanf("%d", &inputNum);
    if(inputNum % 2 == 0)
        printf("%d is Even number", inputNum);
    return 0;
}