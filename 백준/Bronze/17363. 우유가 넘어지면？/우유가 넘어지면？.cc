#include <bits/stdc++.h>
#define ll long long
using namespace std;
char arr[105][105];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            char a;
            cin >> a;
            if (a=='-')
                a='|';
            else if (a=='|')
                a='-';
            else if (a=='/')
                a='\\';
            else if (a=='\\')
                a='/';
            else if (a=='^')
                a='<';
            else if (a=='<')
                a='v';
            else if (a=='v')
                a='>';
            else if (a=='>')
                a='^';
            arr[i][j]=a;
        }
    }
    for (int i=M-1;i>=0;i--){
        for (int j=0;j<N;j++){
            cout << arr[j][i];
        }
        cout << "\n";
    }
    return 0;
}
