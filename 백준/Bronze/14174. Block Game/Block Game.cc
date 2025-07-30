#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    int N, arr[26]={0};
    cin >> N;
    for (int i=0;i<N;i++){
        string a, b;
        int s1[26]={0}, s2[26]={0};
        cin >> a >> b;
        for (int j=0;j<a.size();j++)
            s1[a[j]-'a']++;
        for (int j=0;j<b.size();j++)
            s2[b[j]-'a']++;
        for (int j=0;j<26;j++)
            arr[j]+=max(s1[j],s2[j]);
    }
    for (int i=0;i<26;i++)
        cout << arr[i] << "\n";
    return 0;
}