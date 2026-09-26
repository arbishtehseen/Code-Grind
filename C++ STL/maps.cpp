#include<iostream>
#include<map>
using namespace std;

void printmap(map<int, string> &m){
	cout << m.size() << endl;
	// m.size() --> gives size of map
for( auto &pr : m){
		cout << pr.first<< " " << pr.second  << endl;
	}
}

int main() {
	map<int, string> m;
	// inserting 
	m[1] = "abc";
	m[5] = "cdc";
	m[3] = "acd";
	m.insert({4, "sfg"});
	/*
	map<int,string> :: iterator it;
	for(it = m.begin(); it != m.end(); it++){
		cout << (*it).first<< " " << (*it).second  << endl;
	}
	  */
	  printmap(m);
	
	return 0;
}