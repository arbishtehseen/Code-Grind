#include<iostream>
#include<string>
#include<cstring>

using namespace std;
int main(){
	
	string input;
	
	cin>>input;
	int count=0; 
	int len = input.size(); 
	int visited[len] = {0}; 
	
	for(int i = 0 ; i < input.size() ; i++){
		
		visited[i] = 1;
		count++;
		
		for(int j = i+1 ; j < len ; j++){
		if(input[i] == input[j] && visited[j] == 0){
			count--; 
			visited[j] = 1; 
		}
	}
		
	}
	
	if(count%2 == 0){
		cout<<"CHAT WITH HER!"<<endl;
	}
	else{
		cout<<"IGNORE HIM"<<endl;
	}
	
	
	return 0; 
}