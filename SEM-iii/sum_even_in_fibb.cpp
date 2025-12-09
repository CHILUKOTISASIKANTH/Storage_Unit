#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=0,b=1,c;
	int n;
	cin >> n;
	int sum=0;
	while(n-2){
		c = a+b;
		a = b;
		b = c;
		if((c&1) == 0){
			sum += c;
		}
		cout << c << " ";
		n--; 
	}
	cout << endl << sum << endl;
	return 0;
}
