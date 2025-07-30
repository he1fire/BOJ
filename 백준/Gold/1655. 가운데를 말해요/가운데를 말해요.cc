#include <iostream>
#include <queue>
using namespace std;
int main () {
	 ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    priority_queue<int> pQ1, pQ2;
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        a+=10000;
        if (i==0)
        pQ1.push(a);
        else if (a<=pQ1.top())
        pQ1.push(a);
        else
        pQ2.push(-a);
        if (pQ1.size()>pQ2.size()+1){
            pQ2.push(-pQ1.top());
            pQ1.pop();
            }
        else if (pQ2.size()>pQ1.size()){
            pQ1.push(-pQ2.top());
            pQ2.pop();
            }
        cout << pQ1.top()-10000 << "\n";
        }
    return 0;
    }