#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[30];
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    cin.ignore();
    while (N--){
        ll chk=-1;
        getline(cin,S);
        for (int i=0;i<S.size();i++){
            if ((!i || S[i-1]==' ') && S[i]!=' '){
                ll x=(S[i]<='Z' ? S[i]-'A' : S[i]-'a');
                if (!arr[x]){
                    arr[x]=1;
                    chk=i;
                    break;
                }
            }
        }
        if (chk==-1){
            for (int i=0;i<S.size();i++){
                if (S[i]!=' '){
                    ll x=(S[i]<='Z' ? S[i]-'A' : S[i]-'a');
                    if (!arr[x]){
                        arr[x]=1;
                        chk=i;
                        break;
                    }
                }
            }
        }
        for (int i=0;i<S.size();i++){
            if (i==chk)
                cout << "[" << S[i] << "]";
            else
                cout << S[i];
        }
        cout << "\n";
    }
    return 0;
}