#include <iostream>
#include <algorithm>
#include <string>
#define ll long long
using namespace std;
ll N;
int main () {
	cin >> N;
	getchar();
	while (N--){
		string S;
		ll s=0, e=0;
		getline(cin,S);
		S+=" ";
		for (int i=0;i<S.size();i++){
			if (S[i]==' '){
				reverse(S.begin()+s,S.begin()+i);
				s=i+1;
			}
				
		}
		for (int i=0;i<S.size()-1;i++)
			cout << S[i];
		cout << "\n";
	}
    return 0;
}