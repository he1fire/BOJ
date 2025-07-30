#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int check[55];
int main() {
    vector<int> x, y;
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        x.push_back(a);
        y.push_back(a);
    }
    sort(y.begin(),y.end());
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (x[i]==y[j]){
                for (int k=j;k<N;k++){
                    if (check[k]==0){
                        cout << k << " ";
                        check[k]=1;
                        break;
                    }
                }
                break;
            }
        }
    }
    return 0;
}