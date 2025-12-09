#include<stdio.h>
#define Max 1e9
void Insertion_Sort(int a[],int n){
	int i;
		for(i=1;i<n;i++){
	int j=i-1;
	int temp=a[i];
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
void Selection_Sort(int a[],int n){
	int i,j,k=0,b[n],fir;
for(i=0;i<n;i++){
	int min=a[0];
	for(j=0;j<n;j++){
		if(min>a[j]){
			min=a[j];
			fir=j;
		}
	}
	b[k]=min;
	a[fir]=10000000;
	k++;
}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	Insertion_Sort(a,n);
//	Selection_Sort(a,n);

	for(i=0;i<n;i++){
	printf("%d ",a[i]);
}
}
