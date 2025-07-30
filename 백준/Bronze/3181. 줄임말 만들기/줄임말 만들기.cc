#include <iostream>
#include <queue>
using namespace std;
int main () {
    int i=0;
    string S, ans, cnt[10]={"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili"};
    while (cin >> S){
        int chk=1;
        if (i){
            for (int j=0;j<10;j++){
                if (S==cnt[j])
                    chk=0;
            }
        }
        if (chk)
            ans.push_back(S[0]-32);
        i++;
    }
    cout << ans;
    return 0;
}