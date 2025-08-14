#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<ll,ll> m;
ll T, N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        cin >> N;
        m.clear();
        while (N--){
            char a;
            ll b;
            cin >> a >> b;
            if (a=='I')
                m[b]++;
            else{
                if (m.empty())
                    continue;
                auto st=m.begin(), ed=--m.end();
                if (b==-1){
                    (st->second)--;
                    if (st->second==0)
                        m.erase(st);
                }
                else{
                    (ed->second)--;
                    if (ed->second==0)
                        m.erase(ed);
                }
            }
        }
        if (m.empty())
            cout << "EMPTY\n";
        else
            cout << m.rbegin()->first << " " << m.begin()->first << "\n";
    }
    return 0;
}