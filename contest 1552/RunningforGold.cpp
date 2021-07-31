#include <bits/stdc++.h>
#define MOD 1000000007

 
using namespace std;
using namespace chrono;


void olympicsGOld(){
	int n;
	cin>>n;

	vector<vector<int> >arr(n,vector<int>(5));

	for(int i = 0; i < n; i++){
		for(int j = 0; j < 5; j++){
			cin >> arr[i][j];
		}
	}

	int gold = 0;

	for(int i = 1; i < n; i++){
		int cnt = 0;

		for(int j = 0; j < 5; j++){
			if(arr[i][j] < arr[gold][j]){
				cnt++;
			}
		}
		if(cnt >= 3){
			gold = i;
		}

	}

	for(int i = 0; i < n ;i++){
		int cnt = 0;
		for(int j = 0; j < 5; j++){
			if(arr[i][j] < arr[gold][j]){
				cnt++;
			}
		}
		if(cnt >= 3){
			gold = -2;
			break;
		}
	}
	cout << gold+1 << "\n";


}

 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--){
    	olympicsGOld();
    }



    return 0;
    }