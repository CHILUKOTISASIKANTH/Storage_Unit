#include<iostream> 
using namespace std; 
	class A 
	{ 
	 protected: 
	  int a; 
	}; 
	class B:virtual public A 
	{ 
	 protected: 
	  int b; 
	}; 
	class C:virtual public A 
	{ 
	 protected: 
	  int c; 
	}; 
	class D:public B,public C 
	{ 
	 private: 
	  int d; 
	  public: 
	  void get() 
	  { 
	   a=3; 
	   b=4; 
	   c=5; 
	   d=6; 
	  } 
	  void show() 
	  { 
	   cout<<"Sum is: "<<a+b+c+d; 
	  } 
	}; 
int main() 
{ 
 D d1; 
 d1.get(); 
 d1.show(); 
 return 0; 
} 
