#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    while (1){
        int N;
        string S;
        cin >> N;
        if (!N)
            break;
        cin >> S;
        for (int i=0;i<N;i++){
            for (int j=0;j<S.size();j++){
                if (j%(2*N)==i || j%(2*N)==(2*N-1-i))
                    cout << S[j];
            }
        }
        cout << "\n";
    }
    return 0;
}