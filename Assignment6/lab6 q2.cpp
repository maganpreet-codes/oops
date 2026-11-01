#include<iostream>
using namespace std;
class number{
	int value;
	
	public:
		number(){
			value=8;
		}
		
		void operator--()
		{
			--value;
		}
		
		void display()
		{
			cout<<"value ="<<value<<endl;
		}
};

int main()
{
	number n;
	
	cout<<"Before applying --:"<<endl;
	n.display();
	--n;
	cout<<"After applying --:"<<endl;
	n.display();
	return 0;
}
