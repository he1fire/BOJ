#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, top;
string S;
double arr[105];
map<char, double> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    for (int i=0;i<N;i++){
        double a;
        cin >> a;
        m['A'+i]=a;
    }
    for (int i=0;i<S.size();i++){
        if (S[i]>='A' && S[i]<='Z')
            arr[++top]=m[S[i]];
        else{
            double a=arr[top], b=arr[top-1];
            if (S[i]=='+')
                arr[top-1]=a+b;
            else if (S[i]=='-')
                arr[top-1]=b-a;
            else if (S[i]=='*')
                arr[top-1]=a*b;
            else if (S[i]=='/')
                arr[top-1]=b/a;
            top--;
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << arr[top];
    return 0;
}