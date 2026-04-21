#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	int n , t;
	cin>>n>>t;
	
	string s;
	cin>>s;

	
	for(int k = 0 ; k < t ; k++){
		int j = 1;
		int visited[n] = {0};
		
	for(int i = 0 ; i < s.length() - 1; i++){
		
	    int	j = i+1;
	    
		if(s[i] == 'B' && s[j] == 'G' ){
		
		char temp = s[i];
		s[i] = s[j] ;
		s[j] = temp;
		
		i++;
	}	
		j++;
	}
}
	
	cout<<s;
	
	
	
	
	
	return 0;
}