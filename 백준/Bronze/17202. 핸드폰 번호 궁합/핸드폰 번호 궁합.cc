#include <iostream>
#include <string>
using namespace std;
int main() {
    string N, M, ans;
    cin >> N >> M;
    for (int i=0;i<8;i++){
        ans.push_back(N[i]);
        ans.push_back(M[i]);
    }
    while (ans.size()!=2){
        string x;
        for (int i=1;i<ans.size();i++)
            x.push_back((ans[i]+ans[i-1]-96)%10+48);
        ans=x;
    }
    cout << ans;
    return 0;
}