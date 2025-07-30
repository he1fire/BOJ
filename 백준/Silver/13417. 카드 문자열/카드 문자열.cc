#include <iostream>
#include <deque>
using namespace std;
deque<char> dq;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
    	int M;
    	cin >> M;
    	for (int j=0;j<M;j++){
    		char a;
    		cin >> a;
    		if (dq.empty())
    			dq.push_front(a);
    		else if (a<=dq.front())
    			dq.push_front(a);
    		else
    			dq.push_back(a);
    			
    	}
    	while (!dq.empty()){
    			cout << dq.front();
    			dq.pop_front();
    	}
    	cout << "\n";
    }
    return 0;
}