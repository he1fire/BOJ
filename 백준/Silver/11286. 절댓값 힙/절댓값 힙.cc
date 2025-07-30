#include <iostream>
#include <queue>
using namespace std;
int main () {
    priority_queue<pair<int,int> > pQ;
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int a, b=0;
        cin >> a;
        a>0 ? b=-a : b=a;
        if (a!=0)
        pQ.push(make_pair(b,-a));
        else
            {
            if (!pQ.empty())
                {
                cout << -pQ.top().second << "\n";
                pQ.pop();
                }
            else
            cout << "0\n";
            }
        }
    return 0;
    }