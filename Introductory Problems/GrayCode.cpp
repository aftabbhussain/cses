//Discipline is choosing what you want most over what you want now.
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define couty cout<<"YES"<<"\n"
#define coutn cout<<"NO"<<"\n"
#define MAX 1000000007
#define nline "\n"

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

vector<string> grayCode(int n){
    if(n == 1){
        return {"0", "1"};
    }

    vector<string> prev = grayCode(n-1);
    vector<string> result;

    for(int i = 0; i < prev.size(); i++){
        result.push_back("0" + prev[i]);
    }
    for(int i = prev.size()-1; i >= 0; i--){
        result.push_back("1" + prev[i]);
    }

    return result;
}

void Solve(){
    int n;
    cin >> n;
    vector<string> res = grayCode(n);
    for(auto x : res){
        cout << x << "\n";
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
