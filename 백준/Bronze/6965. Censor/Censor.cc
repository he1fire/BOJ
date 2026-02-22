#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    cin.ignore();
    while (N--){
        getline(cin, S);
        vector<string> v;
        string tmp;
        stringstream ss(S);
        while (getline(ss, tmp, ' '))
            v.push_back(tmp);
        for (auto x:v){
            if (x.size()==4)
                cout << "****";
            else
                cout << x;
            cout << " ";
        }
        cout << "\n\n";
    }
    return 0;
}