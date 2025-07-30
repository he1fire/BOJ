#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, chk=1;
string S[1005], A, B, ans;
int main(){
    cin >> N >> M >> B;
    for (int i=0;i<M;i++)
        cin >> S[i];
    for (int i=0;i<N;i++)
        A+='A'+i;
    for (int i=0;S[i][0]!='?';i++){
        for (int j=0;j<N-1;j++){
            if (S[i][j]=='-')
                swap(A[j],A[j+1]);
        }
    }
    for (int i=M-1;S[i][0]!='?';i--){
        for (int j=0;j<N-1;j++){
            if (S[i][j]=='-')
                swap(B[j],B[j+1]);
        }
    }
    for (int i=0;i<N-1;i++){
        if (A[i]==B[i])
            ans+='*';
        else if (A[i]==B[i+1] && A[i+1]==B[i]){
            ans+='-';
            swap(A[i],A[i+1]);
        }
        else{
            chk=0;
            break;
        }
    }
    if (chk)
        cout << ans;
    else {
        for (int i=0;i<N-1;i++)
            cout << "x";
    }
    return 0;
}