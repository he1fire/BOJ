#include <iostream>
using namespace std;
int f(int a, int b){
    if((a%2==0 && b%2==0) || (a%2==1 && b%2==1))
    return 1;
    else
    return 0;
    }
int g(int a, int b){
    if((a%2==0 && b%2==0) || (a%2==1 && b%2==1))
    return 0;
    else
    return 1;
    }
int main () {
    int N, x, y;
    cin >> N >> x >> y;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if((x+y)%2==0){
                if(f(i,j))
                cout << "v";
                else
                cout << ".";
                }
            else{
                if(g(i,j))
                cout << "v";
                else
                cout << ".";
                }
            }
        cout << "\n";
        }
    return 0;
    }