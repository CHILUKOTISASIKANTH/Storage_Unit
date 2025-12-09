#include<bits/stdc++.h>
using namespace std;
bool Cool(int n,int si){
	int store = n;
	int sum = 0;
	for(int i = 1;i <= si;i++){
		int r = n%10;
		sum = sum + pow(r,si);
		n/=10;
	}
	if(store == sum) return true;
	return false;
}
int main(){
	int n;
	cin >> n;
	int size = log10(n)+1;
	if(Cool(n,size))
	cout << "Armstrong" << endl;
	else 
	cout << "Not An Armstrong" << endl;
	return 0;
}
