#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string ans[4]={"invalid!","equilateral","isosceles","scalene"};
int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        int a, b, c, chk=0;
        cin >> a >> b >> c;
        if (a<b+c && b<a+c && c<a+b){
            if (a==b && b==c)
                chk=1;
            else if (a==b || b==c || c==a)
                chk=2;
            else
                chk=3;
        }
        cout << "Case #" << i << ": " << ans[chk] << "\n";
    }
    return 0;
}