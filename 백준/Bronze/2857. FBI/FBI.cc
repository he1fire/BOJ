#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main () {
    int cnt=0;
    vector<int> x;
    for (int i=1;i<=5;i++)
        {
        string N;
        cin >> N;
        for (int j=2;j<N.size();j++)
            {
            if (N[j-2]=='F' && N[j-1]=='B' && N[j]=='I')
                {
                cnt=1;
                x.push_back(i);
                break;
                }
            }
        }
    if (cnt)
        {
        for (int i=0;i<x.size();i++)
        cout << x[i] << " ";
        }
    else
    cout << "HE GOT AWAY!";
    return 0;
    }