#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int ans=0, arr[27]={0, };
        string x;
        cin >> x;
        for (int j=0;j<x.size();j++)
        arr[x[j]-65]=1;
        for (int j=0;j<26;j++)
            {
            if (arr[j]==0)
            ans+=j+65;
            }
        cout << ans << "\n";
        }
    return 0;
    }