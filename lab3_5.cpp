#include <iostream>
#include <string>
using namespace std;
int main(){
	string text1;
	cout << "Enter the first text: ";
	cin >> text1;
	
	string text2;
	cout << "Enter the second text: ";
	cin >> text2;
	
	int N;
	cout << "Enter N: ";
	cin >> N;
	
	int count=1;
	while(count<=N){

		if(count%2==0){
		cout << text2 ;
		}else{
		cout << text1 ;
	}count=count+1; cout << "  ";
	}
}