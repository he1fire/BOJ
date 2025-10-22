#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
set<string> s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        string a;
        cin >> a;
        if (a.substr(a.size()-min(6,(int)a.size()))=="Cheese")
            s.insert(a);
    }
    cout << (s.size()<4 ? "sad" : "yummy");
    return 0;
}