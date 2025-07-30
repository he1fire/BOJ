#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> arr;
    int N, x, y;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int a;
        cin >> a;
        arr.push_back(a);
        }
    cin >> x >> y;
    long long cnt=N;
    for (int i=0;i<N;i++)
        {
        int a=arr[i]-x;
        if (a<=0)
        continue;
        else if (a<y)
        cnt++;
        else if (a%y==0)
        cnt+=a/y;
        else
        cnt+=a/y+1;
        }
    cout << cnt;
    return 0;
    }