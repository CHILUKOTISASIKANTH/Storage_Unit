#include <bits/stdc++.h>
using namespace std;
class adding{
  private: int a,b;
  public: 
    adding(){
        a=0,b=0;
    }
    adding(int x,int y){
        a=x;
        b=y;
    }
    void print(){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
    // adding operator+(adding &obj){
    //     adding temp;
    //     temp.a=a+obj.a;
    //     temp.b=b+obj.b;
    //     return temp;
    // }
    
    friend adding operator+(adding &o1,adding &o2){
        cout<<"inside friend"<<endl;
        adding temp;
        temp.a=o1.a+o2.a;
        temp.b=o1.b+o2.b;
        return temp;
    }
};
int main() {
	// your code goes here
    adding obj1(15,25),obj2(40,50);
    obj1.print();
    obj2.print();
    adding obj3;
    obj3=obj1+obj2;
    cout<<"outside ...."
    obj3.print();
}

