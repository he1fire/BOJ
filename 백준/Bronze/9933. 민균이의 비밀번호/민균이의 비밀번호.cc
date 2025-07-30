#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    int N;
    string S[101];
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> S[i];
    for (int i=0;i<N;i++){
        string a=S[i];
        int b=0;
        reverse(a.begin(),a.end());
        for (int j=i;j<N;j++){
            if (a==S[j]){
                cout << a.size() << " " << a[a.size()/2];
                b=1;
                break;
            }
        }
        if (b)
            break;
    }
    return 0;
}