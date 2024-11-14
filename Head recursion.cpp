
#include <iostream>
using namespace std;

int cybrom(int a){
	if(a<1){
		return a;
	}

	cout<<a<<"\n";  //Head recursion
	cybrom(a-1);
}

int main(){                           
cybrom(5);

}	

