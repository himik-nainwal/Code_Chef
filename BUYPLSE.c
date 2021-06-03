#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define s scanf
#define p printf

int main(){
        int a,b,x,y;
        s("%d",&a);
        s("%d",&b);
        s("%d",&x);
        s("%d",&y);
        int sum=0;
        sum=a*x+(b*y);
        p("%d",sum);
    return 0;
}