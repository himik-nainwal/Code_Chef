#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int test_cases;
    scanf("%d",&test_cases);
    for(int i=0;i<test_cases;i++){
        int x,mm,d;
        scanf("%d",&x);
        scanf("%d",&mm);
        scanf("%d",&d);
        int time;
        int e;
        e=x+d;
        time=x*mm;

        if(time<e){
            printf("%d\n",time);
        }
        else{
            printf("%d\n",e);
        }
    }
    return 0;
}