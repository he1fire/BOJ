#include <iostream>
#include <string>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        string S;
        double ans=0;
        cin >> ans;
        getline(cin, S);
        for (int j=0;j<S.size();j++){
            if (S[j]=='@')
                ans*=3;
            if (S[j]=='%')
                ans+=5;
            if (S[j]=='#')
                ans-=7;
        }
        printf("%.2lf\n", ans);
    }
    return 0;
}