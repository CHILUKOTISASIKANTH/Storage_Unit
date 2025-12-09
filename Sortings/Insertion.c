#include<stdio.h>
//InsertionSort Technique
void InsertionSort(int a[],int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		//Storing the i-th index element
		int temp=a[i];
		int j=i-1;
		//Checks sorting position of elements from a[i-1] to a[0]
		while(j>=0 && a[j]>temp)
		{
			//elements greater than temp are moved to one step right
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
int main(){
	int n;
	//Reading the no.of elements in the array
	scanf("%d",&n);
	int a[n],i;
	//Scaning the elements
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//Calling the Sorting array
	InsertionSort(a,n);
	Print_array(a,n);
}
