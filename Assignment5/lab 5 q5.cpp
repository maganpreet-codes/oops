#include<iostream>
#include<string>
using namespace std;

class maximum{
	public:
	    int findmax(int a,int b){
	    	if(a>b)
	    		return a;
			else
			  return b;
		}
		
		int findmax(int a, int b, int c){
			if(a<b && a<c)
			   return a;
			else if(b<a && b<c)
			   return b;
			else
			   return c;
		}	
		
		double findmax(double a,double b){
			if (a>b)
			  return a;
			else 
			  return b ;
		}
};

int main(){
	maximum m;
	
	cout<<"Greater of two integers: "<<m.findmax(4,6)<<endl;
	cout<<"Greatest of three integers: "<<m.findmax(4,6,5)<<endl;
	cout<<"Greater of two decimal number: "<<m.findmax(2.3,5.5);
	
	return 0;
}
