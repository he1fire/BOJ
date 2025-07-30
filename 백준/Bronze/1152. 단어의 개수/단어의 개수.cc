#include <iostream>
#include <string>
using namespace std;
int main () {
    int ans=0, cnt=0;
    string N;
    getline(cin,N);
    for (int i=0;i<N.size();i++)
        {
        if (N[i]==' ')
        cnt=0;
        else if (N[i]!=' ' && cnt==0)
            {
            ans++;
            cnt=1;
            }
        }
    cout << ans;
    return 0;
    }