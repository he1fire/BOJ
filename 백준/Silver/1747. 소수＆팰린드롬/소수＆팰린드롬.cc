#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
bool arr[1005000];
void f(){
    arr[1]=1;
    for (ll i=2;i<1005000;i++){
        if (!arr[i]){
            for (ll j=i*i;j<1005000;j+=i)
                arr[j]=1;
            string s=to_string(i);
            for (int j=0;j<=s.size()/2;j++){
                if (s[j]!=s[s.size()-j-1])
                    arr[i]=1;
            }
        }
    }

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    f();
    cin >> N;
    for (ll i=N;i<=1005000;i++){
        if (!arr[i]){
            cout << i;
            break;
        }
    }
    return 0;
}