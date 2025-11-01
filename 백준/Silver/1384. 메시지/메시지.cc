#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll a, b;
};
ll N;
string S[25];
vector<st> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int now=1;1;now++){
        cin >> N;
        if (!N)
            break;
        v.clear();
        for (int i=0;i<N;i++){
            cin >> S[i];
            for (int j=0;j<N-1;j++){
                char c;
                cin >> c;
                if (c=='N')
                    v.push_back({(i-j-1+N)%N,i});
            }
        }
        cout << "Group " << now << "\n";
        if (v.empty())
            cout << "Nobody was nasty\n";
        else{
            for (auto x:v)
                cout << S[x.a] << " was nasty about " << S[x.b] << "\n";
        }
        cout << "\n";
    }
    return 0;
}