#include <iostream>
#include <string>
using namespace std;
int main (){
    string N;
    cin >> N;
    if (N[0]=='0' && N[1]=='x'){
        string M;
        int cnt=0;
        for (int i=N.size()-1;i>1;i--){
            if (N[i]<65)
                M.push_back(N[i]);
            else
                M.push_back(N[i]-39);
            }
        for (int i=0, j=1;i<M.size();i++, j*=16){
            cnt+=(M[i]-48)*j;
        }
        cout << cnt;
    }
    else if (N[0]=='0'){
        string M;
        int cnt=0;
        for (int i=N.size()-1;i>0;i--)
            M.push_back(N[i]);
        for (int i=0, j=1;i<M.size();i++, j*=8){
            cnt+=(M[i]-'0')*j;
        }
        cout << cnt;
    }
    else
        cout << N;
    return 0;
}