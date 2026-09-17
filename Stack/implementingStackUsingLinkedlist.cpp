#include<iostream>
#include<list>
using namespace std;

class Stack {
	private : 
	list<int> l;
	
	public : 
	void push_front(int val) {
		l.push_front(val);
	}
	
	void pop_back() {
		l.pop_front();
	}
	
	int getTop(){
		return l.front();
	}
	
	bool isEmpty() {
		return l.empty();
	}
};

int main() {
	Stack l1;
	l1.push_front(10);
	l1.push_front(20); 
	l1.push_front(30);
	l1.push_front(40);
	l1.push_front(50); 
	
	while(!l1.isEmpty()){
		cout << l1.getTop() << endl;
		l1.pop_back();
	}
	
	
	return 0;
}