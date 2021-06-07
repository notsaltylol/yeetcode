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
    int n;
    cin>>n;
    vi c(n);
    int i=0;
    int d=2;
    int curr=0;
    while(i<n){
        if(i==n-n/d){
            curr-=d;
            d*=2;
        }
        curr=(curr+d)%n;
        cout<<i<<" "<<curr<<endl;
        cout<<endl;
        i++;
    }
    return 0;
}