#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main () {
    string x;
    int N;
    vector<string> arr;
    cin >> x >> N;
    for (int i=0;i<N;i++)
        {
        int cnt=0;
        string y;
        cin >> y;
        for (int j=0;j<9;j++)
            {
            if (x[j]!=y[j] && x[j]!='*')
                {
                cnt++;
                break;
                }
            }
        if (cnt==0)
        arr.push_back(y);
        }
    cout << arr.size() << "\n";
    for (int i=0;i<arr.size();i++)
    cout << arr[i] << "\n";
    return 0;
    }