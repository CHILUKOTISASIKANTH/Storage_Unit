void Q_sort(int *nums,int left,int right){
    int base=nums[right];
    int j=left-1,i;
    int temp;
    if(left<right){
        for(i=left;i<right;i++){
            if(base<nums[i]){
                j++;
                swap(nums[j],nums[i],temp);
            }
        }
        swap(nums[j+1],nums[right],temp);
        Q_sort(nums,left,j);
        Q_sort(nums,j+2,right);
    }
}
