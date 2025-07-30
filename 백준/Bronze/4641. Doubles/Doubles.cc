#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    while (1)
        {
        int N[100], x=0, y=0;
        for (int i=0;1;i++)
            {
            cin >> N[i];
            if (N[i]==0 || N[i]==-1)
            break;
            x=i;
            }
        if (N[0]==-1)
        break;
        sort (N,N+x+1);
        for (int j=0;j<=x;j++)
            {
            for (int k=j+1;k<=x;k++)
                {
                if (N[k]/N[j]==2 && N[k]%N[j]==0)
                y++;
                }
            }
        cout << y << "\n";
        }
    return 0;
    }