/*Recursion  :-  
Function calling itself is called recursion
Head recursion     
Tail Recursion
*/

#include <iostream>
using namespace std;

int cybrom(int a){
	if(a<1){
		return a;
	}
	cout<<a*<<"\n";   //Head recursion   fifo
	cybrom(a-1);
	cout<<a<<"\n";  //tail recursion   lifo
}

int main(){       //stack memory main exucute  |___|  open mouth    data come in top   lifo                        
cybrom(5);

}	

