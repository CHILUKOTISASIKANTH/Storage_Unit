#include <bits/stdc++.h>
using namespace std;
class unary{
    int a;
    public:
    unary(){
        a=0;
    }
    unary(int x){
        a=x;
    }
    void print(){
        cout<<"a = "<<a<<endl;
    }
    friend void operator++(unary &obj){
        ++obj.a;
    }
};

int main() {
	// your code goes here
   unary first(23);
   first.print();
   ++first;
   first.print();
}

