#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string S;
    while (getline(cin,S)){
        ll sm=0, la=0, nu=0, sp=0;
        for (auto i:S){
            if ('a'<=i && i<='z')
                sm++;
            if ('A'<=i && i<='Z')
                la++;
            if ('0'<=i && i<='9')
                nu++;
            if (i==' ')
                sp++;
        }
        cout << sm << " " << la << " " << nu << " " << sp << "\n";
    }
    return 0;
}