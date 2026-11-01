#include<iostream>
#include<string>
using namespace std;

class calculator{
	public:
		int sum(int a,int b){
			return a + b;
		}
		
		int sum(int a,int b, int c){
			return a + b + c;
		}
		
		double sum(double a, double b){
			return a + b;
		}
};

int main(){
	calculator c;
	
	cout<<"Sum of two integers: "<<c.sum(2,3)<<endl;
	cout<<"Sum of three integers: "<<c.sum(3,4,5)<<endl;
	cout<<"Sum of two decimal number: "<<c.sum(2.3,5.4)<<endl;
	return 0;
}
