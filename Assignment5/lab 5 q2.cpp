#include<iostream>
#include<string>
using namespace std;

class area{
	
	public:
		int calculate(int side){
			return side * side;
		}
		
		int calculate(int length,int breadth){
			return length * breadth;
		}
		
		double calculate(double radius){
			return 3.14 * radius * radius;
		}
};

int main(){
	area a;
	
	cout<<"Area of square: "<<a.calculate(10)<<endl;
	cout<<"Area of reactangle: "<<a.calculate(4,8)<<endl;
	cout<<"Area of circle: "<<a.calculate(3.4)<<endl;
	return 0;
}
