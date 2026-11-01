#include<iostream>
#include<string>
using namespace std;

class Result{
	public:
		void result(int marks){
			cout<<"Marks in one subject: "<<marks<<endl;
		}
		
		double result(int m1,int m2){
			return (m1+m2)/2.0;
		}
		
		double result(int m1,int m2,int m3){
			return (m1+m2+m3)/3.0;
		}
};

int main(){
	Result r;
	r.result(10);
	cout<<"Average of two subjects: "<<r.result(55,78)<<endl;
	cout<<"Average of three subjects: "<<r.result(66,88,95)<<endl;
	
	return 0;
}
