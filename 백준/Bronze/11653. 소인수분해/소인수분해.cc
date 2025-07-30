#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> x;
    int N;
    cin >> N;
	for (int i=2;i<=N;i++){
        if (N%i==0){
            while (N%i==0){
                x.push_back(i);
                N/=i;
            }
        }
    }
    for (int i=0;i<x.size();i++)
        cout << x[i] << "\n";
	return 0;
}