#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
deque<char> l, r;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S >> N;
    for (int i=0;i<S.size();i++)
        l.push_back(S[i]);
    while (N--){
        char a;
        cin >> a;
        if (a=='L' && !l.empty()){
            r.push_front(l.back());
            l.pop_back();
        }
        else if (a=='D' && !r.empty()){
            l.push_back(r.front());
            r.pop_front();
        }
        if (a=='B' && !l.empty())
            l.pop_back();
        else if (a=='P'){
            char b;
            cin >> b;
            l.push_back(b);
        }
    }
    for (int i=0;i<l.size();i++)
        cout << l[i];
    for (int i=0;i<r.size();i++)
        cout << r[i];
    return 0;
}