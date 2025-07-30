#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool f(char a){
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
        return 1;
    else
        return 0;
}
int main(){
    while (1){
        string S;
        int x=0, y=0, chk=1, odd=0;
        cin >> S;
        if (S=="end")
            break;
        for (int i=0;i<S.size();i++){
            if (f(S[i]))
                odd=1,x++,y=0;
            else
                y++,x=0;
            if (i>0 && S[i]==S[i-1] && S[i]!='e' && S[i]!='o')
                chk=0;
            if (x>=3 || y>=3)
                chk=0;
        }
        odd && chk ? cout << "<" << S << "> is acceptable.\n" : cout << "<" << S << "> is not acceptable.\n";
    }
    return 0;
}