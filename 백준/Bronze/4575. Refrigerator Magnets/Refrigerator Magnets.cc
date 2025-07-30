#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (1){
        int arr[26]={0}, cnt=1;
        string S;
        getline(cin,S);
        if (S=="END")
            break;
        for (int i=0;i<S.size();i++){
            if (S[i]!=' ')
                arr[S[i]-'A']++;
        }
        for (int i=0;i<26;i++){
            if (arr[i]>1)
                cnt=0;
        }
        if (cnt)
            cout << S << "\n";
    }
    return 0;
}