#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define couty cout<<"YES"<<"\n";
#define coutn cout<<"NO"<<"\n";

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve(){
    int y, x, ans = 0;
    cin >> y >> x;

    int m = max(y,x), n = min(y,x);
    if(m %2 == 0){
    	if(y <= x){
    		ans = (m-1)*(m-1) + n;
    	}
    	else{
    		ans = (m-1)*(m-1) + 2*(m-1) + 2 - n;
    	}
    }
    else{
    	if(y >= x){
    		ans = (m-1)*(m-1) + n;
    	}
    	else{
    		ans = (m-1)*(m-1) + 2*(m-1) + 2 - n;
    	}
    }
    cout << ans <<endl;

}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    auto begin = chrono::high_resolution_clock::now();

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}
