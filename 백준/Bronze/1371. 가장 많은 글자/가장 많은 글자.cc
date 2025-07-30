#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[30], chk=0;
string S;
vector<char> ans;
int main(){
    while (cin >> S){
        for (int i=0;i<S.size();i++){
            if (S[i]>='a' && S[i]<='z')
                arr[S[i]-'a']++;
        }
    }
    for (int i=0;i<30;i++){
        if (arr[i]>chk){
            chk=arr[i];
            ans.clear();
            ans.push_back(i+'a');
        }
        else if (arr[i]==chk)
            ans.push_back(i+'a');
    }
    for (auto i:ans)
        cout << i;
    return 0;
}