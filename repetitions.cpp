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
    char c=input[0];
    int m=0;
    int t=0;
    for(int i=0;i<input.length();i++){
        if(c==input[i]) {
            t++;
        }
        else {
            if(m<t){
                m=t;
            }
            c=input[i];
            t=1;
        }
    }
    if(m<t){
        m=t;
    }
    cout<<m;
    return 0;
}