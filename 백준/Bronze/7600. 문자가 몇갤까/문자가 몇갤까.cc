#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        ll arr[30]={0,}, ans=0;
        string a;
        getline(cin,a);
        if (a=="#")
            break;
        for (auto i:a){
            if ('A'<=i && i<='Z')
                arr[i-'A']=1;
            if ('a'<=i && i<='z')
                arr[i-'a']=1;
        }
        for (int i=0;i<30;i++)
            ans+=arr[i];
        cout << ans << "\n";
    }
    return 0;
}