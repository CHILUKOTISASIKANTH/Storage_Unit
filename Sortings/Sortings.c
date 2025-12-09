#include<stdio.h>
//SelectionSort Technique
void SelectionSort(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		//Storing the i-th index
		int idx=i;
		//Iterating from i+1-th index to n
		for(j=idx+1;j<n;j++){
			//Checking the smallest element in every time in array
			if(a[j]<a[idx]){
				idx=j;
			}
		}
		//Rearranging the smallest element to the i-th index every iteration of i
		int temp=a[i];
		a[i]=a[idx];
		a[idx]=temp;
	}
}
//BubbleSort Techinque
void BubbleSort(int a[],int n){
	int i,j;
	//Iterating from i-th index to n-1 index(sorting will complete with in n-1 iterations)
	for(i=0;i<n-1;i++){
	int flag=0;
		for(j=0;j<n-i-1;j++){
			//Checking the adjacent element if j-th > j+1-th ,then swap them
			if(a[j]>a[j+1]){
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				//Checking the elements are greater than or not
				flag=1;
			}
		}
		//If the flag==0,then the array is already sorted 
		if(flag==0) break;
	}
}
//InsertionSort Technique
void InsertionSort(int a[],int n){
	int i;
	for(i=1;i<n;i++){
		//Storing the i-th index element
		int temp=a[i];
		int j=i-1;
		//Checks sorting position of elements from a[i-1] to a[0]
		while(j>=0 && a[j]>temp){
			//elements greater than temp are moved to one step right
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
//RadixSort Technique
int Max(int a[],int n){
	int i,max=0;
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
void RadixSort_BucketSort(int a[],int n){
    int i,j,k,e=1;
    //Declaring the 2D array
	int buck[10][n];
	//Finding the max element in the array
	int max=Max(a,n);
	//Finding the no.of digits present in the max element
	int digitMax=log10(max)+1;
	//Iterating the loop upto max element
	for(i=0;i<digitMax;i++)
	{
		//Intializing the new array to zero to store the no.of same last digit num present in array
		int count[10]={0};
		for(j=0;j<n;j++){
			//Finding the last digit in each iteration by decreasing the digits place
			int r=(a[j]/e)%10;
			//Storing the array value according to last digit in accurate position in the bucket
			buck[r][count[r]]=a[j];
			//Increasing the count as per last digit count
			count[r]++;
		}
		e*=10;//
		int idx=0;
		//Iterating the loop till 0 to 9 last digit positions
		for(j=0;j<10;j++){
			//Iterating the loop tilll count of each last digit
			for(k=0;k<count[j];k++){
				//rearranging the according last digit to the original array 
				a[idx]=buck[j][k];
				idx++;
			}
		}
	}
}
//MergeSort Technique
void Merging_the_array(int a[],int start,int mid,int end){
	int i=start;
	int j=mid+1;
	//Declaring the new array
	int b[end-start+1],k=0;
	//Merging two arrays in sorting order
	while(i<=mid && j<=end){
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
	for(i=start;i<=end;i++){
		a[i]=b[k++];
	}
}
void MergeSort(int a[],int n,int start,int end){
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
//QuickSort Technique
int Partision(int a[],int key,int start,int end){
	int s=start;
	while(start<end){
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
void QuickSort(int a[],int n,int start,int end){
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
void Print_array(int a[],int n){
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
	//SelectionSort(a,n);
	//BubbleSort(a,n);
	//InsertionSort(a,n);
	//RadixSort_BucketSort(a,n);
    //MergeSort(a,n,0,n-1);
    //QuickSort(a,n,0,n-1);
	Print_array(a,n);
}
