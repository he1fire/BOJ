#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[30];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        string a, b;
        ll chk=1;
        fill(&arr[0],&arr[29],0);
        cin >> a >> b;
        for (auto i:b)
            arr[i-'A']++;
        for (int i=0;i<30;i++){
            if ((a.find(i+'A')!=string::npos && arr[i]==0) || (a.find(i+'A')==string::npos && arr[i]>0))
                chk=0;
        }
        cout << (chk ? "YES\n" : "NO\n");
    }
    return 0;
}