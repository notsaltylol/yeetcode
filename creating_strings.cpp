#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
#define rep(i,a,b) for (int i = a; i < b; i++)

int main(){
    string s;
    cin>>s;
    sort(all(s));
    vector<string> v;
    do{
        v.pb(s);
    }while(next_permutation(all(s)));
    cout<<sz(v)<<endl;
    for(string m : v){
        cout<<m<<endl;
    }
    return 0;
}