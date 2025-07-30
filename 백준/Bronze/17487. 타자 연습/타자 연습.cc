#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll chk, l, r;
string S, arr="uiophjklnm";
int main(){
    getline(cin,S);
    for (int i=0;i<S.size();i++){
        if (S[i]>='A' && S[i]<='Z')
            chk++, S[i]+=32;
        if (S[i]==' ')
            chk++;
        else{
            if (arr.find(S[i])!=string::npos)
                r++;
            else
                l++;
        }
    }
    while (chk--){
        if (l>r)
            r++;
        else
            l++;
    }
    cout << l << " " << r;
    return 0;
}