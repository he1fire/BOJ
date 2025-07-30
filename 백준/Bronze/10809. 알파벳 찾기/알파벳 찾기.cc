#include <bits/stdc++.h>
#define ll long long
using namespace std;
string N;
ll arr[26];
int main(){
    cin >> N;
    fill(&arr[0],&arr[26],-1);
    for (int i=0;i<N.size();i++){
        if (arr[N[i]-'a']==-1)
            arr[N[i]-'a']=i;
    }
    for (auto i:arr)
        cout << i << " ";
    return 0;
}