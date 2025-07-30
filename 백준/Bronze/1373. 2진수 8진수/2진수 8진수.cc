#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string N, ans;
    int cnt=0;
    cin >> N;
    reverse(N.begin(),N.end());
    while (N.size()%3!=0)
        N.push_back('0');
    for (int i=0;i<N.size();i++){
        if (i%3==0)
            cnt+=N[i]-'0';
        if (i%3==1)
            cnt+=(N[i]-'0')*2;
        if (i%3==2){
            cnt+=(N[i]-'0')*4;
            ans.push_back(cnt+48);
            cnt=0;
        }
    }
    reverse(ans.begin(),ans.end());
    cout << ans;
    return 0;
}