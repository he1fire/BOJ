#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int ans=0;
    string N, x;
    getline(cin,N);
    N.push_back(' ');
    for (int i=0;i<N.size();i++){
        if (N[i]!=' ')
            x.push_back(N[i]);
        else{
            int cnt=0;
            reverse(x.begin(),x.end());
            for (int j=0, a=1;j<x.size();j++, a*=10){
                cnt+=(x[j]-48)*a;
            }
            ans+=cnt;
            x.clear();
        }
    }
    cout << ans;
    return 0;
}