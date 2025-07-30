#include <iostream>
#include <string>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        string x;
        int ans=0;
        cin >> x;
        for (int j=0;j<x.size();j++)
            {
            if (ans<0)
            break;
            x[j]=='(' ? ans++ : ans--;
            }
        ans==0 ? cout << "YES\n" : cout << "NO\n";
        }
    return 0;
    }