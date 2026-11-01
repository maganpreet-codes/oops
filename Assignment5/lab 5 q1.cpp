#include<iostream>
#include<string>
using namespace std;
class print
{
	public:
		void display(int a){
			cout<<"Integer: "<<a<<endl;
		}
		
		void display(double b){
			cout<<"Double: "<<b<<endl;
		}
		
		void display(string c){
			cout<<"String: "<<c<<endl;
		}
		
};
int main(){
	print p;
	p.display(10);
	p.display(20.5);
	p.display("hello");
	
	return 0;
	}
