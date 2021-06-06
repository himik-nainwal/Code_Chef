/*
Chef knows about two languages spoken in Chefland, but he is not proficient in any of them. The first language contains lowercase English letters between 'a' and 'm' inclusive and the second language contains only uppercase English letters between 'N' and 'Z' inclusive.

Due to Chef's limited vocabulary, he sometimes mixes the languages when forming a sentence — each word of Chef's sentence contains only characters from one of the languages, but different words may come from different languages.

You are given a sentence as a sequence of K words S1,S2,…,SK. Determine whether it could be a sentence formed by Chef, i.e. if it contains only the characters from the two given languages and each word contains only characters from a single language.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains an integer K followed by a space and K space-separated strings S1,S2,…,SK.
Output
For each test case, print a single line containing the string "YES" if the given sentence can be formed by Chef or "NO" if it cannot.

You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤105
1≤K≤10
1≤|Si|≤100 for each valid i
the sum of lengths of all the strings on the input does not exceed 105
each string contains only lowercase and uppercase English letters
Example Input
3
1 aN
2 ab NO
3 A N D
Example Output
NO
YES
NO
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_cases;
	cin>>test_cases;
	cout<<endl;
	while(test_cases--){
	    int x;
	    cin>>x;
	    cin.ignore();
	    char str[x][100];
	    for(int i=0;i<x;i++)
	        scanf("%s",str[i]);
	        
	   int q=0;
	   cout<<endl;
	   for(int i=0;i<x;i++){
	       if(str[i][0]>='a' && str[i][0]<='z'){
	           if(str[i][0]>='a' && str[i][0]<='m'){
	               for(int j=0;str[i][j]!='\0';j++){
	                   if(!(str[i][j]>='a' && str[i][j]<='m')){
	                       q=1;
	                       break;
	                   }
	               }
	           }
	           else{
	               q=1;
	           }
	       }
	       else{
	           if(str[i][0]>='N'&&str[i][0]<='Z'){
	               for(int j=0;str[i][j]!='\0';j++){
	                   if(!(str[i][j]>='N' && str[i][j]<='Z')){
	                       q=1;
	                       break;
	                   }
	               }
	           }
	           else
	            q=1;
	       }
	       if(q==1)
	            break;
	   }
	   if(q==1)
	        cout<< "no"<<endl;
	   else
	        cout<< "yes"<<endl;
	}
	return 0;
}
