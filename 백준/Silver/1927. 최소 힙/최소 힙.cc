#include <iostream>
#include <queue>
using namespace std;
int main () {
	 ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    priority_queue<int> pQ;
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int a;
        cin >> a;
        if (a!=0)
        pQ.push(-a);
        else
            {
            if (!pQ.empty())
                {
                cout << -pQ.top() << "\n";
                pQ.pop();
                }
            else
            cout << "0\n";
            }
        }
    return 0;
    }