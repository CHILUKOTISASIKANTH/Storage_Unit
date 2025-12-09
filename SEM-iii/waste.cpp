#include <iostream>
using namespace std;
//void test (int n){
//	try {
//		if(n == 0) throw "Zero";
//		if(n == 1) throw 10;
//		if(n == 2) throw 20.25;
//		if(n == 3) throw 'x';
//	}
//	catch(char *){
//		cout<<"Caught Zero"<< endl;
//	}
//	catch(int) {
//		cout<<"Caught Integer exception"<<endl;
//	}
//	catch(double){
//		cout<<"Caught Double exception"<< endl;
//	}
//	catch(char){
//		cout<<"Caught character exception"<<endl;
//	}
//	catch(...){
//		cout<<"alll exceptions caught"<<endl;
//	}
//}
int main(){
	int a = 1;
	try{
		try{
			throw a;
		}
		catch(int x){
			cout<<"Exception caught in inner block"<< endl;
			throw x;
		}
	}
	catch(int n){
		cout<<"\nException caught in Outer block"<<endl;
		cout<<"\nEnd of the program..."<<endl;
	}
	return 0;
}
