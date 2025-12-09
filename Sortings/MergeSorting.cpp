#include<stdio.h>
void Merging_array(int a[],int start,int mid,int end){
	int i=start;//first part begin
	int j=mid+1;//second part begin
	int b[end-start+1],k=0;
	while(i<=mid && j<=end){
		if(a[i]<a[j]){
			b[k++]=a[i++];
		}
		else{
			b[k++]=a[j++];
		}
	}
	while(i<=mid) b[k++]=a[i++];
	while(j<=end) b[k++]=a[j++];
	k=0;
	for(int i=start;i<=end;i++){
		a[i]=b[k++];
	}
}
void MergeSort(int a[],int n,int start,int end){
	if(start>=end) return;
	int mid=(start+end)/2;//breaking the array into two parts
	MergeSort(a,n,start,mid);//sorting in the left side array upto base case
	MergeSort(a,n,mid+1,end);//sorting in the right side array upto base case
	Merging_array(a,start,mid,end);//merging the array after sorting
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
	MergeSort(a,n,0,n-1);
	print(a,n);
}
