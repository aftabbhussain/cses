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

void Solve(){
    string str;
    vector<int> freq(26,0);
    cin >> str;
    int countOdd = 0;
    for(auto ch : str)
    	freq[ch-'A']++;

    for(auto x : freq)
    	if(x %2 != 0) countOdd++;

    if(countOdd <= 1){
    	string res, odd;
    	for(int i = 0; i < 26; i++){
    		if(freq[i] %2 == 0){
    			string s(freq[i]/2 , (char)(i+'A'));
    			res += s;
    		}
    		else{
    			string s(freq[i],(char)(i+'A'));
    			odd = s;
    		}
    	}
    	cout << res << odd << string(res.rbegin(), res.rend()) << endl;
    }
    else 
    	cout<< "NO SOLUTION" << endl;
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
