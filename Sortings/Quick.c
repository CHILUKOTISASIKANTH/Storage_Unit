#include<stdio.h>
//QuickSort Technique
int Partision(int a[],int key,int start,int end)
{
	int s=start;
	while(start<end)
	{
		//Checking the array value with key value finding the greater value time than key each time
		//If 'greater' swap the value right side of key
		//else increase start value to check greater than key
		while(a[start]<=key){
			start++;
		}
		//If 'smaller' swap the value left side of key
		//else decrease end value to check lesser than key
		while(a[end]>key){
			end--;
		}
		//swaping the greater and smaller value
		if(start<end){
			int temp=a[start];
			a[start]=a[end];
			a[end]=temp;
		}
		//arranging the key value at end position
		int temp=a[end];
		a[end]=a[s];
		a[s]=temp;
		return end;
	}
}
void QuickSort(int a[],int n,int start,int end)
{
	if(start<end)
	{
	int pivot=a[start];
	pivot=Partision(a,pivot,start,end);
	//0 to pivotindex-1 left side elements less than pivot
	QuickSort(a,n,start,pivot-1);
	//pivot+1 to end right side elements greater than pivot
	QuickSort(a,n,pivot+1,end);
	}
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
    QuickSort(a,n,0,n-1);
	Print_array(a,n);
}
