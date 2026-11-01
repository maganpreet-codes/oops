#include <iostream>
using namespace std;
class counter{
	int count;
	
	public:
		counter()
		{
			count=0;
		}
		
		void operator++()
		{
			++count;
		}
		
		void display()
		{
			cout<<"Count ="<<count<<endl;
		}
};
int main()
{
	counter c;
	cout<<"Before applying ++:"<<endl;
	c.display();
	++c;
	cout<<"After applying ++:"<<endl;
	c.display();
	return 0;
}
