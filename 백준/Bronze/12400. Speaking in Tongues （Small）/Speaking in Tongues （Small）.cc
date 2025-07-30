#include <iostream>
#include <string>
using namespace std;
int main () {
    char arr[26]={'y','h','e','s','o','c','v','x','d','u','i','g','l','b','k','r','z','t','n','w','j','p','f','m','a','q'};
    int N;
    cin >> N;
    cin.ignore();
    for(int i=0;i<N;i++){
        string S;
        getline(cin,S);
        cout << "Case #" << i+1 << ": ";
        for(int j=0;j<S.size();j++){
            if(S[j]==' ')
                cout << ' ';
            else
                cout << arr[S[j]-'a'];
        }
        cout << "\n";
    }
    return 0;
}