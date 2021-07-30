
#include <bits/stdc++.h>
#define MOD 1000000007
 
using namespace std;
 
 
void solve(){
	int n;
	cin >> n;
	vector<int> arr(n+1);
	for(int  i = 1; i <= n; i++){
		cin >> arr[i];
	}
 
	int pow = 1;
	for(int i = 1; i <= n; i++){
		pow *= 3;
	}
 
	for(int k = 1; k < pow; k++){
		int k_cp = k;
		int sum = 0;
 
		for(int i = 1; i <= n; i++){
			int s = k_cp % 3;
			k_cp /= 3;
 
			if(s == 2){
				s = -1;
			}
			
			sum += s * arr[i];
		}

		if(sum == 0){
			cout<< "\n" <<"YES";
			return;
		}
 
	}
	cout<< "\n" <<"NO";
 
}
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--){
 
 
    	solve();
    }
 
 
 
 
    return 0;
    }