/*
Chef's college is conducting an online exam, where his camera will be monitored by one or more invigilators (supervisors). Once again, Chef failed to prepare for the exam on time and decided to google answers during it.

The exam starts at time 0 and ends at time F minutes. Chef needs a total of K minutes of googling during the exam in order to pass it. There are N invigilators (numbered 1 through N); for each valid i, the i-th invigilator monitors Chef's camera during the time interval starting at Si minutes since the start of the exam and ending at Ei minutes (where 0≤Si≤Ei≤F). He was resourceful enough to somehow get hold of these times and now he wants to know if he would be able to pass the exam if he googles the answers during the times when no one is looking at his camera.

Note: The time of googling need not be continuous and there can be multiple invigilators at some interval of time.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains three space-separated integers N, K and F.
N lines follow. For each valid i, the i-th of these lines contains two space-separated integers Si and Ei.
Output
For each test case, print a single line containing the string "YES" if it is possible to pass the exam or "NO" if it is impossible.

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤105
1≤N≤105
1≤F≤109
0≤K≤F
0≤Si≤Ei≤F for each valid i
the sum of N over all test cases does not exceed 2⋅105
Example Input
3
1 10 10
0 10
2 2 10
0 5
7 10
2 2 100
0 5
5 10
Example Output
NO
YES
YES
Explanation
Example case 1: There is no point during the exam when Chef is not monitored, so he is unable to google even for a single second and will fail the exam.

Example case 2: Chef can google for 2 minutes (in the time interval [5,7], when he is not monitored) and hence will be able to pass the exam.

Example case 3: Chef can google for 2 minutes (in the time interval [10,12]) and hence will be able to pass the exam.


*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
                             
int main(void)
{
       ll test_cases;
       cin>>test_cases;
       while(test_cases--){
              ll n,m,k,f,i;
              cin>>n>>k>>f;
              vector<pair<ll,ll>> pq;
              for(i=0;i<n;i++){
                        ll a,b;
                        cin>>a>>b;
                        pq.push_back({a,b});
              }
              sort(pq.begin(),pq.end());
              ll ans=0;
              ans+=pq[0].ff;
              ll x=pq[0].ff,y=pq[0].ss;
              for(i=1;i<n;i++)
              {
                        if(pq[i].ff>y)
                        {
                                ans+=pq[i].ff-y;
                                y=max(y,pq[i].ss);
                        }
                        else
                                y=max(y,pq[i].ss);
             }
             
             ans+=(f-y);
            if(ans>=k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
                                                
                            
       }                             
         
}
