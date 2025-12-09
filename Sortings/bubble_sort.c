#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);//3
	int i,j, temp=0,a[n];
	for(i=0;i<n;i++){//1 2 3
	                // 0 1 2 
	scanf("%d",&a[i]);
}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				 temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
}

