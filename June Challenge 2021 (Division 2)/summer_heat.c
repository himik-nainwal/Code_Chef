#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int test_cases;
    scanf("%d",&test_cases);

    while(test_cases--){
        int xa,xb,Xa,Xb;
        scanf("%d",&xa);
        scanf("%d",&xb);
        scanf("%d",&Xa);
        scanf("%d",&Xb);

        int fl=0;
        f1=Xa/xa;
        int f2=0;
        f2=Xb/xb;
        int sum=0;
        sum=f1+f2;
        printf("%d\n",sum);
    }
    return 0;
}