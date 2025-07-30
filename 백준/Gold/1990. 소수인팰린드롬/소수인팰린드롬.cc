#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
bool arr[10000005];
void f(){
    arr[1]=1;
    for (ll i=2;i<=10000000;i++){
        if (!arr[i]){
            for (ll j=i*i;j<=10000000;j+=i)
                arr[j]=1;
            string s=to_string(i);
            for (int j=0;j<=s.size()/2;j++){
                if (s[j]!=s[s.size()-j-1])
                    arr[i]=1;
            }
            if (!arr[i] && N<=i && i<=M)
                cout << i << "\n";
        }
    }

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    cin >> N >> M;
    f();
    cout << "-1";
    return 0;
}