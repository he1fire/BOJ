#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string x[51];
    int N, M;
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> x[i];
    for (int a=0;a<N;a++){
        for (int i=0;i<N;i++){
            for (int j=0;j<M;j++){
                if (i+1<N && x[i][j]=='o' && x[i+1][j]!='#')
                    swap(x[i][j],x[i+1][j]);
            }
        }
    }
    for (int i=0;i<N;i++)
        cout << x[i] << "\n";
	return 0;
}