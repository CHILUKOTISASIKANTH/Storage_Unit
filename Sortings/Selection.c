#include<stdio.h>
//SelectionSort Technique
void SelectionSort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		//Storing the i-th index
		int idx=i;
		//Iterating from i+1-th index to n
		for(j=idx+1;j<n;j++)
		{
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
	SelectionSort(a,n);
	Print_array(a,n);
}
