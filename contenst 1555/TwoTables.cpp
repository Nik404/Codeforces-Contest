#include <bits/stdc++.h>

using namespace std;
// using namespace chrono;

#define MOD 1000000007
#define set_bits __builtin_popcountll
#define INF 1e18


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

// const int INF = int(1e9);





void solve(){
    ll W, H;
    ll x1 ,y1, x2, y2;
    ll w, h;

    cin >> W >> H;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> w >> h;

    ll ans  = INF;

// move horizontally

    if(x2 - x1 + w <= W){
        ans = min(ans, max(0LL, w - x1));
        ans = min(ans, max(0LL, x2 - (W - w)));
    }

// move vertically

    if(y2 - y1 + h <= H){
        ans = min(ans, max(0LL, h - y1));
        ans = min(ans, max(0LL, y2 - (H - h)));
    }

    if(ans == INF){
        cout << -1 << endl;
    }
    else{
        cout << ans <<endl;
    }


}




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(9);

    int t;
    cin >> t;
    while(t--){

    	solve();
    }


    return 0;
    }

