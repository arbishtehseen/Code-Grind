#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> dq;
	
	dq.push_back(1);
	dq.push_back(2);
	dq.push_back(3); // 1 , 2 , 3
	dq.push_front(4);
	dq.push_front(5); // 5 , 4 , 1 , 2 , 3
	
	cout << dq.front() << endl;
	cout << dq.back() << endl;
	
	while(!dq.empty()){
		cout << dq.front() << endl;
		dq.pop_front();
	}
	
	
	
	return 0;
}