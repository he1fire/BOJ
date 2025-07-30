#include <iostream>
#include <string>
using namespace std;
int main() {
    int M, ans=1;
    string N;
    cin >> M >> N;
    for (int i=1;i<N.size();i++){
        if (N[i]==N[i-1])
            ans=0;
    }
    ans ? cout << "Yes" : cout << "No";
    return 0;
}