#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define couty cout<<"YES"<<"\n";
#define coutn cout<<"NO"<<"\n";

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve(){
    int n; cin>>n;
    vector<int>v(n,0);
    for(int i=0; i<n-1; ++i){
    	int x; cin>>x;
    	v[x-1]=1;
    }
    // auto it = find(v.begin(),v.end(),0);
    // cout<<((it-v.begin())+1);

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
