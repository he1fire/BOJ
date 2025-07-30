#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr1[30], arr2[30];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        fill(&arr1[0],&arr1[29],0);
        fill(&arr2[0],&arr2[29],0);
        ll ans=1;
        string a, b;
        cin >> a >> b;
        for (auto i:a)
            arr1[i-'a']++;
        for (auto i:b)
            arr2[i-'a']++;
        for (int i=0;i<30;i++){
            if (arr1[i]!=arr2[i])
                ans=0;
        }
        cout << (ans ? "Possible\n" : "Impossible\n"); 
    }
    return 0;
}