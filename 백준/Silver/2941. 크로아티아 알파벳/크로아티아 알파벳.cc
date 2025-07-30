#include <iostream>
#include <string>
using namespace std;
int main () {
    int cnt=0, ans=0;
    string N;
    cin >> N;
    for (int i=0;i<N.size();i++)
        {
        if (cnt)
        cnt--;
        else
            {
            if ((N[i]=='c' || N[i]=='s' || N[i]=='z') && N[i+1]=='=')
            cnt++;
            else if ((N[i]=='c' || N[i]=='d') && N[i+1]=='-')
            cnt++;
            else if ((N[i]=='l' || N[i]=='n') && N[i+1]=='j')
            cnt++;
            else if (N[i]=='d' && N[i+1]=='z' && N[i+2]=='=')
            cnt+=2;
            ans++;
            }
        }
    cout << ans;
    return 0;
    }