#include <bits/stdc++.h>
using namespace std;
 


 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	string s;
    	cin >> s;
    	int result = 0;

    	string s2 = s;
    	sort(s2.begin(), s2.end());

    	for(int i = 0; i < n ;i++){
    		if(s[i] != s2[i]){
    			result++;
    		}
    	}

    	cout<<"\n"<<result;
    }
    return 0;
 }