#include<iostream>
using namespace std;
int main(){

	char ch='A';
	
	// cout<<(int*)&ch<<endl;//value at bucket till we get ''
	cout<<(void*)&ch<<endl;//fooling of compiler
	char c='F';
	cout<<&c<<endl;//it wil give FA because a is previously stored in it 



	return 0;
}