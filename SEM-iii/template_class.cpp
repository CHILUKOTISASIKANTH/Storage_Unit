#include<bits/stdc++.h>
using namespace std;
template <class T>
class calculator{
	T a,b;
	public:
		calculator(T x,T y){
			a=x,b=y;
		}
		T add(){
			return a + b;
		}
};
int main(){
	calculator<int> c1(4,3);
	calculator<float>  c2(5.3,23.6);
	cout << c1.add() << endl;
	cout << c2.add() << endl;
}
