//Finde the nth term of fiboncci series 
#include <iostream>
using namespace std;
int fib(int a){
	
	if(a<=1){
		return 1;
	}
	return fib(a-1)+fib(a-2); 
}

int main(){   
int n;
cout<<"Enter a number : ";
cin>>n;                       
cout<<fib(n);
}	

