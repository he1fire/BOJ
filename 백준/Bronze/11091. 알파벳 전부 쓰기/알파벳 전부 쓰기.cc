#include <iostream>
#include <string>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    cin.ignore();
    for (int i=0;i<N;i++){
        string S;
        int arr[26]={0}, cnt=1;
        getline(cin, S);
        for (int j=0;j<S.size();j++){
            if (S[j]>='a' && S[j]<='z')
                arr[S[j]-'a']++;
            if (S[j]>='A' && S[j]<='Z')
                arr[S[j]-'A']++;
        }
        for (int j=0;j<26;j++){
            if (arr[j]==0)
                cnt=0;
        }
        if (cnt)
            cout << "pangram\n";
        else {
            cout << "missing ";
            for (int j=0;j<26;j++){
                if (arr[j]==0)
                    cout << (char)(j+'a');
            }
            cout << "\n";
        }
    }
    return 0;
}