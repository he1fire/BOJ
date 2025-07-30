#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--)
        {
        int A, B, x, y;
        cin >> A >> B >> x >> y;
        if (A>B)
            {
            swap(A,B);
            swap(x,y);
            }
        vector<int> pos(A+1, -1);
        x--;
        y--;
        x=(x+A*40000-y)%A;
        int here=0, year=0;
        while(pos[here]==-1)
            {
            pos[here] = year*B;
            here+=B-A;
            here%=A;
            year++;
            }
        if (pos[x]==-1) cout<<-1;
        else cout<<pos[x]+y+1;
        cout<<endl;
        }
    return 0;
    }