#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin >> N;
    cin.ignore();
    while (N--){
        ll arr[30]={0,}, cnt=-1;
        char ans;
        string s;
        getline(cin,s);
        for (auto i:s){
            if (i!=' ')
                arr[i-'a']++;
        }
        for (int i=0;i<30;i++){
            if (arr[i]>cnt){
                cnt=arr[i];
                ans=i+'a';
            }
            else if (arr[i]==cnt)
                ans='?';
        }
        cout << ans << "\n";
    }
    return 0;
}