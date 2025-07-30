#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    for (int i=1;1;i++){
        int a, b, c, ans=0;
        cin >> a >> b >> c;
        if (a==0 && b==0 && c==0)
            break;
        while (c>0){
            if (b<=c){
                c-=b;
                ans+=a;
            }
            else{
                ans+=min(c,a);
                c=0;
            }
        }
        cout << "Case " << i << ": " << ans << "\n";
    }
    return 0;
}