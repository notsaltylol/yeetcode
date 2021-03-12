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
    long long n = stoll(input);
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0)n/=2;
        else n=3*n+1; 
        cout<<n<<" ";
    }
    return 0;
}