#include <bits/stdc++.h>
 
using namespace std;
using namespace chrono;

typedef long long ll;

void solve(){
	ll n;
	cin >> n;

	if((n&1) != 0){
		n++;
	}
	if( n >= 6){
		cout << (n>>1)*5LL << endl;
	}
	else{
		cout << 15 << endl;
	}
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