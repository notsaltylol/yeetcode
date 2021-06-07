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
    int m=pow(10,9)+7;
    vi dice{1,2,3,4,5,6};
    int n;
    cin>>n;
    vi c(n+1);
    c[0]=1;
    for(int i=1;i<=n;i++){
        for(int d:dice){
            if(i-d>=0){
                c[i]+=c[i-d];
                c[i]%=m;
            }
        }
    }
    cout<<c[n];
    return 0;
}