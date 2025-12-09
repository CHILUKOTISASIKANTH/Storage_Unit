#include<stdio.h>
//int totalMoney(int n) {
//    int r=n%7;
//    int d=n/7;
//    int sum=0;
//    if(d>1){
//     sum=28*d+(r*(r+1))/2+r*d+7*(d-1);
//    }
//    else   sum=28*d+(r*(r+1))/2+r*d;
//    return sum;
//}
int numWaterBottles(int numBottles, int numExchange) {
     int d=numBottles/numExchange;
	 int r=numBottles%numExchange;
    int re=d+r,sum;
    sum=sum+numBottles;
    if((numBottles)<numExchange) return sum;
   return numWaterBottles(re,numExchange);
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int i,j;
    for(i=0;i<numsSize-1;i++){
    	for(j=i;j<numsSize;j++){
    		if(nums[i]+nums[j]==target){
    		return i,j;	
			}
		}
	}
}
void Merging(int *a,int start,int mid,int end){
    int b[end-start+1],k=0,i=start,j=mid+1;
    while(i<=mid && j<=end){
        if(a[i]>a[j]) b[k++]=a[j++];
        else b[k++]=a[i++];
    }
    while(i<=mid) b[k++]=a[i++];
    while(j<=end) b[k++]=a[j++];
    k=0;
    for(i=start;i<=end;i++){
        a[i]=b[k++];
    }
}
void Mergesort(int *a,int n,int start,int end){
    if(start>=end) return;
   int  mid=(start+end)/2;
    Mergesort(a,n,start,mid);
    Mergesort(a,n,mid+1,end);
    Merging(a,start,mid,end);
}
int findNonMinOrMax(int* nums, int numsSize) {
    Mergesort(nums,numsSize,0,numsSize-1);
    if(numsSize>2) {
        return nums[1];
    }
    return -1;
}
int ug(int n){
	int a=n;
	while(n>0){
		int r=n%10;
		if(a%r!=0){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int n,m;
	scanf("%d",&n);
	int a[n],i;
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
	int b[m];
	//int (*res)=twoSum(a,n,m,b);
	int res=ug(n);
	//for(i=0;i<m;i++)
	printf("%d ",res);
}

