#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int main () {
    vector<int> x;
    int N, M, end=0, cnt=0, now=0;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        x.push_back(1);
        }
    cnt=M;
    end=N;
    cout << "<";
    while (1){
        if (end==0)
        break;
        if (x[now]==1)
        cnt--;
        if (cnt==0){
            x[now]=0;
            cout << now+1;
            cnt=M;
            end--;
            if (end!=0)
            cout << ", ";
            else
            cout << ">";
            }
        now++;
        if (now==N)
        now=0;
        }
    return 0;
    }