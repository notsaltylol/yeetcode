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

ll fact(int n){
    int x=1;
    rep(i,0,n){
        x*=i+1;
    }
    return x;
}

int main(){
    pi pairOne = mp(1,2);
    int firstElem = pairOne.f;
    cout << firstElem << endl;
    string input;
    cin>>input;
    long long n = stoll(input);
}