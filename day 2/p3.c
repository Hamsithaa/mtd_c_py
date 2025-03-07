#include<stdio.h>

int main(){
    int a =3, b=-2,c=8;
    b++;
    printf("%d %d %d\n",a,b,c);//3 -1 8
    ++b;
    printf("%d %d %d\n",a,b,c);//3 0 8
    c=a--;
    printf("%d %d %d\n",a,b,c);//2 0 3
    b=++c;
    printf("%d %d %d\n",a,b,c);//2 4 4
    c=a-- + --a;
    printf("%d %d %d\n",a,b,c);//2+0

    return 0;
}