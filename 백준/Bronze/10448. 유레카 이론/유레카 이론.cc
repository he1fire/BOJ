#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> x;
    for (int i=1;i*(i+1)/2<=1000;i++)
        x.push_back(i*(i+1)/2);
    int T;
    cin >> T;
    for (int i=0;i<T;i++){
        int N, cnt=0;
        cin >> N;
        for (int i=0;i<x.size();i++){
            for (int j=i;j<x.size();j++){
                for (int k=j;k<x.size();k++){
                    if (x[i]+x[j]+x[k]==N)
                        cnt=1;
                }
            }
        }
        cout << cnt << "\n"; 
    }
	return 0;
}