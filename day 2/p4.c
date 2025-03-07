#include<stdio.h>
#include<math.h>

int main(){
    int num=0;
    puts("Enter a number to check if it is a perfect square");
    scanf("%d",&num);
    int root =floor(sqrt(num));
    if(root*root==num)
    printf("%d is a perfect square",num);
    else 
    printf("%d is not a perfect square",num);

    return 0;
}