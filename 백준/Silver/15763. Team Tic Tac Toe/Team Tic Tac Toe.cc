#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[8][3]={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
set<char> s1;
set<string> s2;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (ll i=0;i<3;i++){
        string a;
        cin >> a;
        S+=a;
    }
    for (ll i=0;i<8;i++){
        set<char> tmp;
        for (ll j=0;j<3;j++)
            tmp.insert(S[arr[i][j]]);
        if (tmp.size()==1)
            s1.insert(*tmp.begin());
        if (tmp.size()==2){
            string s="";
            for (auto c:tmp)
                s+=c;
            s2.insert(s);
        }
    }
    cout << s1.size() << "\n" << s2.size();
    return 0;
}
