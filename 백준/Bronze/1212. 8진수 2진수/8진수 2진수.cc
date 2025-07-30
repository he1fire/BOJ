#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string N, ans, x[8]={{"000"},{"001"},{"010"},{"011"},{"100"},{"101"},{"110"},{"111"}};
    int cnt=0;
    cin >> N;
    for (int i=0;i<N.size();i++)
        ans+=x[N[i]-'0'];
    for (int i=0;i<ans.size();i++){
        if (cnt==1 || ans[i]=='1'){
            cout << ans[i];
            cnt=1;
        }
    }
    if (ans=="000")
        cout << "0";
    return 0;
}