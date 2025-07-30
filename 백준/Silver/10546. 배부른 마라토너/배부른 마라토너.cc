#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<string,int> M;
ll N;
int main(){
    cin >> N;
    for (ll i=0;i<N*2-1;i++){
        string a;
        cin >> a;
        M[a]++;
    }
    for (auto i:M){
        if (i.second%2==1)
            cout << i.first;
    }
    return 0;
}