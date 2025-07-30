#include <iostream>
#include <vector>
using namespace std;
int N;
vector<int> arr;
int table[50];
void DFS (int x, int y) {
    if (x==0)
        {
        for (int i=0;i<50;i++)
            {
            if (table[i]==1)
            cout << i << " ";
            }
        cout << "\n";
        }
    if (y==arr[N-1])
    return;
    for (int i=y;i<arr.size();i++)
        {
        table[arr[i]]=1;
        DFS(x-1,i+1);
        table[arr[i]]=0;
        }
    }
int main () {
    while (1)
        {
        cin >> N;
        if (N==0)
        break;
        for (int i=0;i<N;i++)
            {
            int a;
            cin >> a;
            arr.push_back(a);
            }
        DFS(6,0);
        arr.clear();
        cout << "\n";
        }
    return 0;
    }