#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll T, N;
string S, M;
deque<ll> dq;
void f(){
    ll a=0;
    for (auto i:M){
        if ((i==']' || i==',') && N>0){
            dq.push_back(a);
            a=0;
        }
        else if (i>='0' && i<='9'){
            a*=10;
            a+=i-'0';
        }
        else
            continue;
    }
    ll b=0;
    for (auto i:S){
        if (i=='R')
            b^=1;
        else {
            if (dq.empty()){
                cout << "error\n";
                return;
            }
            else if (b)
                dq.pop_back();
            else
                dq.pop_front();
        }
    }
    cout << "[";
    if (b){
        for (int i=dq.size()-1;i>=0;i--){
            cout << dq[i];
            if (i!=0)
                cout << ",";
        }
    }
    else{
        for (int i=0;i<dq.size();i++){
            cout << dq[i];
            if (i!=dq.size()-1)
                cout << ",";
        }
    }
    cout << "]\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        cin >> S >> N >> M;
        f();
        dq.clear();
    }
    return 0;
}