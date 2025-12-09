#include<stdio.h>
//RadixSort Technique
int Max(int a[],int n)
{
	int i,max=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
void RadixSort_BucketSort(int a[],int n)
{
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
			//Iterating the loop till count of each last digit
			for(k=0;k<count[j];k++){
				//rearranging the according last digit to the original array 
				a[idx]=buck[j][k];
				idx++;
			}
		}
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
	RadixSort_BucketSort(a,n);
	Print_array(a,n);
}
