#include<stdio.h>
//SelectionSort Technique
void Merging_the_array(int a[],int start,int mid,int end)
{
	int i=start;
	int j=mid+1;
	//Declaring the new array
	int b[end-start+1],k=0;
	//Merging two arrays in sorting order
	while(i<=mid && j<=end)
	{
		if(a[i]<a[j]){
			b[k++]=a[i++];
		}
		else{
			b[k++]=a[j++];
		}
	}
	//If the elements are remains in the left side array again arranging
	while(i<=mid) b[k++]=a[i++];
	//If the elements are remains in the right side array again arranging
	while(j<=end) b[k++]=a[j++];
	k=0;
	//Rearranging the sorted array to the original position
	for(i=start;i<=end;i++)
	{
		a[i]=b[k++];
	}
}
void MergeSort(int a[],int n,int start,int end)
{
	if(start>=end) return;
	int mid=(start+end)/2;
	//breaking the array into two parts
	//sorting the left side array upto base case
	MergeSort(a,n,start,mid);
	//sorting in the right side array upto base case
	MergeSort(a,n,mid+1,end);
	//merging the array after sorting after base case
	Merging_the_array(a,start,mid,end);
}
//Printing the Sorted array
void Print_array(int a[],int n)
{
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n;
	//Reading the no.of elements in the array
	scanf("%d",&n);
	int a[n],i;
	//Scaning the elements
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//Calling the Sorting array
    MergeSort(a,n,0,n-1);
	Print_array(a,n);
}
