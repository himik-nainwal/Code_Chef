/*Chef is a very lazy person. Whatever work is supposed to be finished in x units of time, he finishes it in m∗x units of time. But there is always a limit to laziness, so he delays the work by at max d units of time. Given x,m,d, find the maximum time taken by Chef to complete the work.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains a single line of input, three integers x,m,d.
Output:
For each testcase, output in a single line answer to the problem.

Constraints
1≤T≤104
1≤x,m≤10
0≤d<100
Sample Input:
3
1 1 0
1 3 1
2 2 3
Sample Output:
1
2
4
*/

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
