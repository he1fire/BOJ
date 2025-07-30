#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    int N;
    string M[50], ans;
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> M[i];
    for (int i=0;i<M[0].size();i++){
        int cnt=0;
        char x=M[0][i];
        for (int j=0;j<N;j++){
            if (M[j][i]!=x)
                cnt++;
            
        }
        if (cnt==0)
            ans.push_back(x);
        else
            ans.push_back('?');
    }
    cout << ans;
    return 0;
}