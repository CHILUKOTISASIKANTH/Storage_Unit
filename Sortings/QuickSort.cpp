#include<stdio.h>
int partision(int a[],int key ,int start,int end){
	int s=start;
	while(start<end){
		while(a[start]<=key){
			start++;
		}
		while(a[end]>key){
			end--;
		}
		if(start<end){
			int temp=a[start];
			a[start]=a[end];
			a[end]=temp;
		}
		int temp=a[end];
		a[end]=a[s];
		a[s]=temp;
		return end;
	}
}
void Quicksort(int a[],int n,int start,int end){
	if(start<end){
		int pivot=a[start];
		pivot=partision(a,pivot,start,end);
		//0 to pivotindex-1 left side elements less than pivot
		Quicksort(a,n,start,pivot-1);
		//pivot+1 to end right side elements greater than pivot
		Quicksort(a,n,pivot+1,end);
	}
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	Quicksort(a,n,0,n-1);
	print(a,n);
}
