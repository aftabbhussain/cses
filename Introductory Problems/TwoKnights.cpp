#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define couty cout<<"YES"<<"\n";
#define coutn cout<<"NO"<<"\n";

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int k;
	    k = i;
	    int ans = k*k*(k*k-1)/2 - 4*(k-1)*(k-2);
	    cout << ans << endl;
	}
    
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
    //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}
