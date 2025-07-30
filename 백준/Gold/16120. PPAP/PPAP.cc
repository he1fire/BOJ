#include <bits/stdc++.h>
#define ll long long
using namespace std;
stack<char> s;
string N;
ll chk;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N.size();i++){
        char x=N[i];
        if (x=='P'){
            if (chk==0)
                chk=1;
            else if (chk==1 || chk==2)
                chk=2;
            else if (chk==3){
                for (int j=0;j<3;j++)
                    s.pop();
                if (!s.empty() && s.top()=='P')
                    chk=2;
                else
                    chk=1;
            }
        }
        else{
            if (chk==2)
                chk=3;
            else
                chk=0;
        }
        s.push(x);
    }
    if (s.top()=='P' && s.size()==1)
        cout << "PPAP";
    else
        cout << "NP";
    return 0;
}