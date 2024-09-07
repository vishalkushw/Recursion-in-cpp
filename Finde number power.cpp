#include <iostream>
#include <cmath>
using  namespace std;

int Power(int n,int p){
	if(n==0){
		return 1;
	}
	int prevPower=pow(n ,p-1);
	return n*prevPower;
}
int main(){
	int n,p;
	cout<<"enter number and power : ";
	cin>>n>>p;
	cout<<Power(n,p)<<endl;
}
