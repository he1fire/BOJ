#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N, chk=0;
    string S, st, ed;
    cin >> N >> S;
    for (int i=0;i<S.size();i++){
        if (S[i]=='*')
            chk=1;
        else if (chk==0)
            st.push_back(S[i]);
        else
            ed.push_back(S[i]);
    }
    reverse(ed.begin(),ed.end());
    for (int i=0;i<N;i++){
        int ans=1;
        string a;
        cin >> a;
        if (a.size()<st.size()+ed.size()){
            cout << "NE\n";
            continue;
        }
        for (int j=0;j<st.size();j++){
            if (st[j]!=a[j])
                ans=0;
        }
        reverse(a.begin(),a.end());
        for (int j=0;j<ed.size();j++){
            if (ed[j]!=a[j])
                ans=0;
        }
        ans ? cout << "DA\n" : cout << "NE\n";
    }
    return 0;
}