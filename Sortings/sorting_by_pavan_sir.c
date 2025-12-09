//Step1:  Run a loop from 1 to n-1 using a variable i
//Step2:  Take two variables key, j
//		Set key = A[i],set j=i-1
//		Run a loop as long as j>=0 && key <A[j]
//Step3: 
//		Set A[j+1] to A[j]
//		decrement j (j--)
//Step4: 
//		After coming out of inner loop Set A[j+1] =key
#include<stdio.h>
void insertion_sort(int a[],int n){
	int i,j;
		for(i=1;i<n;i++){
		int key=a[i];
		j=i-1;
		while(j>=0 && key < a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	    }
}
void print_array(int a[],int n){
	int i;
		for(i=0;i<n;i++){
	printf("%d ",a[i]);
	}
}
int main(){
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	print_array(a,n);
}
