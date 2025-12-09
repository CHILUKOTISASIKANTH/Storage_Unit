#include<stdio.h>
//BubbleSort Techinque
void BubbleSort(int a[],int n)
{
	int i,j;
	//Iterating from i-th index to n-1 index(sorting will complete with in n-1 iterations)
	for(i=0;i<n-1;i++)
	{
	int flag=0;
		for(j=0;j<n-i-1;j++)
		{
			//Checking the adjacent element if j-th > j+1-th ,then swap them
			if(a[j]>a[j+1])
			{
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
	BubbleSort(a,n);
	Print_array(a,n);
}
