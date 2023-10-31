#include<iostream>
using namespace std;
int main(){
	// int a=1;
	// float f=34.5;
	// bool b=true;
	// double d=90.345;

	// cout<<sizeof(a)<<endl;
	// cout<<sizeof(f)<<endl;
	// cout<<sizeof(b)<<endl;
	// cout<<sizeof(d)<<endl;


	// cout<<a<<endl;
	// cout<<f<<endl;
	// cout<<b<<endl;
	// cout<<d<<endl;

	int a=10;


	int *ptr=&a;
	int **tptr=&ptr;
	int ***xptr=&tptr;
	int ****nptr=&xptr;
	// cout<<sizeof(ptr)<<endl;
	// cout<<sizeof(tptr)<<endl;
	// cout<<sizeof(xptr)<<endl;
	


	//cout<<***xptr<<endl;//asking doubt in this


	cout<<a<<endl;
	cout<<ptr<<endl;
	cout<<tptr<<endl;
	cout<<xptr<<endl;
	cout<<nptr<<endl;

	

	// cout<<sizeof(a)<<endl;




	return 0;
}