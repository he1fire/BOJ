#include <iostream>
#include <string>
using namespace std;
int main () {
    int N, cnt=0, x[27]={0, };
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        string y;
        cin >> y;
        x[y[0]-97]++;
        }
    for (int i=0;i<=26;i++)
        {
        if (x[i]>=5)
            {
            cnt++;
            cout << (char)(i+97);
            }
        }
    if (cnt==0)
    cout << "PREDAJA";
    return 0;
    }