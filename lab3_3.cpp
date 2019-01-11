#include <iostream>
using namespace std;
int main(){
	int x=2;
	float sum=0;
	while(x<=69){
		sum+=(1.0/x);
		x++;
	}
	cout << sum;
}