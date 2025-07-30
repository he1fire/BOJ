#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i=1;1;i++){
        string A, B;
        cin >> A >> B;
        if (A=="END" && A==B)
            break;
        int a[26]={0}, b[26]={0}, cnt=1;
        for (int j=0;j<A.size();j++)
            a[A[j]-'a']++;
        for (int j=0;j<B.size();j++)
            b[B[j]-'a']++;
        for (int j=0;j<26;j++){
            if (a[j]!=b[j])
                cnt=0;
        }
        cout << "Case " << i << ": ";
        cnt ? cout << "same\n" : cout << "different\n";
    }
    return 0;
}