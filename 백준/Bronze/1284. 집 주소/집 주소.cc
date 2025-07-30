#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        int a, cnt=0;
        cin >> a;
        if (a==0)
            break;
        while (a){
            if (a%10==0)
                cnt+=4;
            else if (a%10==1)
                cnt+=2;
            else
                cnt+=3;
            cnt++;
            a/=10;
        }
        cout << cnt+1 << "\n";
    }
    return 0;
}