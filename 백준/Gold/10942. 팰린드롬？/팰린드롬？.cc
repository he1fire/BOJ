#include <iostream>
#include <vector>
using namespace std;
int main () {
 	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> x;
    int N, M, y[2001][2001]={0};
    cin >> N;
    for (int i=0;i<N;i++){
        int A;
        cin >> A;
        x.push_back(A);
    }
    for (int i=0;i<2*N-1;i++){
        int a, b;
        a=i/2;
        b=i/2+i%2;
        while (a>=0 && b<N){
            if (x[a]==x[b]){
                y[a+1][b+1]=1;
                a--;
                b++;
            }
            else
                break;
        }
    }
    cin >> M;
    for (int i=0;i<M;i++){
        int A, B;
        cin >> A >> B;
        cout << y[A][B] << "\n";
    }
    return 0;
}