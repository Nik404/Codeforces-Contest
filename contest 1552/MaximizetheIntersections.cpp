#include <bits/stdc++.h>
#define MOD 1000000007

 
using namespace std;


bool intersect(pair<int,int> a, pair<int,int> b){
	if(a.first > b.first)swap(a,b);

	return a.second > b.first and a.second < b.second;
}

 
void solve(){
	int n,k;
	cin >> n >> k;

	vector<pair<int,int> >chords;
	vector<bool> used(2*n+1, false);

	for(int i = 1; i <= k; i++){
		int x,y ;
		cin >> x >> y;

		if(x > y) swap(x, y);
		chords.push_back({x, y});
		used[x] = used[y] = true;
	}

	// remaing unsed points and chords
	vector<int> unused;
	for(int i = 1; i <= 2 * n; i++){
		if(!used[i])unused.push_back(i);
	}

	for(int i = 0; i < n - k; i++){
		chords.push_back({unused[i], unused[i + n - k]});
	}

	int result = 0;

	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			result += intersect(chords[i],chords[j]);
		}
	}
	cout << "\n" << result;
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