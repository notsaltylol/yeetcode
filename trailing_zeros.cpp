#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    for (int i=5;i<=n;i*=5)x+=n/i;
    cout<<x;
    return 0;
}