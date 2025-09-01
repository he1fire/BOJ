#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        ll arr[30][2]={0,}, ans=0;
        string a, b;
        cin >> a >> b;
        for (auto x:b)
            arr[x-'a'][0]++;
        ll L=0, R=0;
        while (R<a.size()){
            ll chk=1;
            if (R<b.size()){
                arr[a[R]-'a'][1]++;
                R++;
            }
            else{
                arr[a[L]-'a'][1]--;
                arr[a[R]-'a'][1]++;
                L++;
                R++;
            }
            for (int i=0;i<30;i++){
                if (arr[i][0]!=arr[i][1])
                    chk=0;
            }
            if (chk)
                ans=1;
        }
        cout << (ans ? "YES\n" : "NO\n");
    }
    return 0;
}