#include <iostream>
using namespace std;
int f(int a, int b){
    if((a%2==0 && b%2==0) || (a%2==1 && b%2==1))
    return 1;
    else
    return 0;
    }
int main () {
    int N, M;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(f(i,j))
            cout << "*";
            else
            cout << ".";
            }
        cout << "\n";
        }
    return 0;
    }