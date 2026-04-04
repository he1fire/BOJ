#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll A, B;
vector<string> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> A >> B;
    if (A>B && A<=B*2){
        while (A!=B+1){
            A-=2;
            B--;
            v.push_back("aba");
        }
        string tmp="";
        for (ll i=0;i<B;i++)
            tmp+="ab";
        v.push_back(tmp+"a");
        cout << "YES\n" << v.size() << "\n";
        for (auto x:v)
            cout << x << "\n";
    }
    else
        cout << "NO";
    return 0;
}