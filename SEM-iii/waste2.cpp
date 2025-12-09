#include<bits/stdc++.h>
using namespace std;
int main(){
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(12);
//	v.push_back(23);
//	for(vector<int>::iterator i=v.begin();i!=v.end();i++){
//		cout<<*i<<" ";
//	}
//	v.push_back(445);
//	cout<<"\n-----------------\n";
//	for(vector<int>::iterator i=v.begin();i!=v.end();i++){
//		cout<<*i<<" ";
//	}
	deque<int> d = {1,2,3,4,5};
	d.push_front(0);
	for(int x:d)
		cout<< x << " ";
	d.push_back(6);
//	d.pop_front();
//	d.pop_back();
	cout<<"\n---------------------\n";
	for(auto x : d)
		cout << x << " ";
	return 0;
}
