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

int main(){
    string input;
    cin>>input;
    ll n = stoll(input);
    ll t = n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        cin >> input;
        t-=stoll(input);
    }
    cout<<t;
    /*
    for(int i=0;i<n;i++){
        b.push_back(false);
    }
    for(int i=0;i<n-1;i++){
        cin >> input;
        b[stoi(input)-1] = true;
    }
    for(int i=0;i<n;i++){
        if(!b[i]){
            cout<<i+1;
        }
    }
    */
    return 0;
}