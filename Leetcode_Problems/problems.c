//leetcode problems
75. Sort Colors
int cmp(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
}
void sortColors(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(nums[0]),cmp);
}

215. Kth Largest Element in an Array
int cmp(const void *a,const void *b){
    return (*(int *)a-*(int *)b);
}
int findKthLargest(int* nums, int numsSize, int k) {
    qsort(nums,numsSize,sizeof(int),cmp);
    return nums[numsSize-k];
}
540. Single Element in a Sorted Array
int singleNonDuplicate(int* nums, int numsSize) {
    int res=0;
    for(int i=0;i<numsSize;i++){
        res^=nums[i];
    }
    return res;
}
70.
int climbStairs(int n) {
    if(n<=2) return n;
    int f=2,s=1,sum;
    for(int i=3;i<=n;i++){
        sum=f+s;
        s=f;
        f=sum;
    }
    return sum;
}
905.
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
   int *arr=(int *)malloc(numsSize*sizeof(int));
   *returnSize=numsSize;
   int n=numsSize,idx=0;
   for(int i=0;i<numsSize;i++){
    if(nums[i]%2==0){
        arr[idx++]=nums[i];
    }
    else{
        arr[n-1]=nums[i];
        n--;
    }
   }
   return arr;
}
1984.
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int minimumDifference(int* nums, int numsSize, int k) {
    qsort(nums,numsSize,4,cmp);
    if(k<=1){
        return 0;
    }
    else{
        int de=100000;
        for(int i=0;i<=numsSize-k;i++){
            int dif=nums[i+k-1]-nums[i];
            if(dif<de) de=dif;
        }
        return de;
    }
    return 0;
}
2460.
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize) {
    int *ptr=(int*)calloc(numsSize,sizeof(int));
    *returnSize=numsSize;
    int idx=0;
    for(int i=0;i<numsSize;i++){
        if(i<numsSize-1 && nums[i]!=0 && nums[i]==nums[i+1]){
            ptr[idx++]=nums[i]*2;
            i++;
        }
        else{
            if(nums[i]!=0){
                ptr[idx++]=nums[i];
            }
        }
    }
    return ptr;
}
2529.
int maximumCount(int* nums, int numsSize) {
    int pos=0,neg=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<0) neg++;
        if(nums[i]>0) pos++;
    }
    return pos>neg?pos:neg;
}
2706.
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        if(((prices[0]+prices[1])-money)>0) return money;
        return (money-(prices[0]+prices[1]));
    }
};
2974.
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=2){
            swap(nums[i],nums[i-1]);
        }
        return nums;
    }
};
3194.
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
       vector<float>mpp;
        while(i<j){
            mpp.push_back((nums[i]+nums[j])/2.0);
            i++,j--;
        }
        return *min_element(mpp.begin(),mpp.end());
    }
};
1832. Check if the Sentence Is Pangram<-+>
153. Find Minimum in Rotated Sorted Array
int bi(int *a,int n){
    int mid,left=0,right=n-1;
    while(left<=right){
    mid=left+(right-left)/2;
    if(left==right ) return a[right];
    if(a[mid]>a[right]) left=mid+1;
    else right =mid;
    }
    return 0;
}
int findMin(int* nums, int numsSize) {
    return bi(nums,numsSize);
    return 0;
}
58. Length of Last Word
int lengthOfLastWord(char* s) {
    int i=strlen(s)-1,j=0;
    if(strlen(s)==1) return strlen(s);
    while(i>=0){
        if(s[i]!=' ') j++;
        else if(j) return j;
        i--;
    }
    return j;
}
162. Find Peak Element
int pe(int *a,int n){
    int mid,left=0,right=n-1;
    while(left<=right){
        mid=left+(right-left)/2;
        if(left==right) return left;
        if(a[mid]<a[mid+1]) left=mid+1;
        else right=mid;
    }
    return mid;
}
int findPeakElement(int* nums, int numsSize) {
    return pe(nums,numsSize);
}
2540. Minimum Common Value
int getCommon(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i=0,j=0;
    while(i<nums1Size && j<nums2Size)
    {
        if(nums1[i]<nums2[j])
        i++;
        else if(nums1[i]>nums2[j])
        {
            j++;
        }else
        return nums1[i];
    }
    return -1;
    
}
383. Ransom Note
bool canConstruct(char* ransomNote, char* magazine) {
    int *p=(int *)calloc(27,sizeof(int));
     for(int j=0; j<strlen(magazine);j++)
      p[magazine[j]-'a']++;
    for(int i=0;i<strlen(ransomNote);i++)
        p[ransomNote[i]-'a']--;
    for(int i=0;i<26;i++){
        if(p[i]<0){
            return 0;
        }
    }
    return 1;
}
852. Peak Index in a Mountain Array
int peakIndexInMountainArray(int* arr, int arrSize) {
    int mid,l=0,r=arrSize-1;
    while(l<=r){
        mid=l+(r-l)/2;
        if(l==r) return l;
        if(arr[mid]<arr[mid+1]) l=mid+1;
        else r=mid;
    }
    return mid;
    return 0;
}
283. Move Zeroes
void moveZeroes(int* nums, int numsSize) {
   int p1=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
                int temp=nums[i];
                nums[i]=nums[p1];
                nums[p1]=temp;
                p1++; 
        }
    }
}
26. Remove Duplicates from Sorted Array
int removeDuplicates(int* nums, int numsSize) {
    int i=1,idx=1;
    while(i<numsSize){
        if(nums[i]==nums[i-1]){
                i++;
        }
        else{
            nums[idx++]=nums[i++];
        }
    }
    return idx;
}
344. Reverse String
void reverseString(char* s, int sSize) {
  
    for(int i=0;i<sSize/2;i++){
          char temp=s[i];
          s[i]=s[sSize-1-i];
          s[sSize-1-i]=temp;
    }
}
217. Contains Duplicate
int  comp(const void *a,const void *b){
    return (*(int *)a-*(int *)b);
}
bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(nums[0]),comp);
    for(int i=1;i<numsSize;i++){
        if(nums[i]==nums[i-1]){
            return 1;
            break;
        }
    }
    return 0;
}
268. Missing Number
int missingNumber(int* nums, int numsSize) {
    int res=numsSize;
    for(int i=0;i<numsSize;i++){
     res^=i^nums[i];
    }
    return res;
}
389.Find the Difference
char findTheDifference(char* s, char* t) {
    int sum1=0,sum2=0;
    int i=0,j=0;
    while(s[i]!='\0')
    {
        sum1 = sum1 + s[i];
        i++;
    }
    while(t[j]!='\0')
    {
        sum2 = sum2 + t[j];
        j++;
    }

    return (char)(sum2 - sum1);
}
561.Array Partition
void me(int *a,int start ,int mid,int end){
    int i=start,j=mid+1;
    int b[end-start+1],k=0;
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
void mer(int *a,int start ,int end){
    if(start>=end) return ;
    int mid=start+(end-start)/2;
    mer(a,start,mid);
    mer(a,mid+1,end);
    me(a,start,mid,end);
}
int s(const void*a,const void *b){
    return (*(int*)a-*(int*)b);
}
int arrayPairSum(int* nums, int numsSize) {
   // mer(nums,0,numsSize-1);
   qsort(nums,numsSize,4,s);
    int res=0;
    for(int i=0;i<numsSize;i+=2){
        res+=nums[i];
    }
    return res;
}
242.Valid Anagram
bool isAnagram(char* s, char* t) {
   int f[26],ft[26];
   if(strlen(s)!=strlen(t)) return 0;
   for(int i=0,j=0;s[i]!='\0',t[i]!='\0';i++,j++){
    f[s[i]-'a']+=1;
    ft[t[i]-'a']+=1;
   }
   for(int i=0;i<26;i++){
    if(f[i]!=ft[i]){
        return 0;
    }
   }
    return 1;
}
263.Ugly Number
bool isUgly(int n) {
    if(n==0) return false;
    while(n%2==0)
        n/=2;
    
    while(n%3==0)
        n/=3;
    
    while(n%5==0)
        n/=5;
    
    printf("%d",n);
    return n==1?true:false;
}
326.Power of Three
bool isPowerOfThree(int n) {
    if(n<1) return 0;
    while(n%3==0){
        n/=3;
    }
    return n==1?1:0;
}
342.Power of Four
bool isPowerOfFour(int n) {
    if(n<1) return 0;
    while(n%4==0){
        n/=4;
    }
    return n==1?1:0;
}
231.Power of Two
bool isPowerOfTwo(int n) {
    if(n<1) return 0;
    while(n%2==0){
        n/=2;
    }
    return n==1?1:0;
}
345.reverse-vowels-of-a-string
bool boole(char s){
    if(s=='A' || s=='a' || s=='E' || s=='e' || s=='i' || s=='I' || s=='o' || s=='O' || s=='U'|| s=='u') return 1;
    return 0;
}
char* reverseVowels(char* s) {
    int len=strlen(s);
    int l=0,r=len-1;
    while(r>l){
        if(!boole(s[l])){
            l++;
        }
       else if(!boole(s[r])){
            r--;
        }
        else{
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            l++;
            r--;
        }
    }
    return s;
}
392.Is subsequence
bool isSubsequence(char* s, char* t) {
    int i=0,j=0;
    while(s[i]!='\0'&&t[j]!='\0'){
        if(s[i]==t[j]){
            i++;
        }
        j++;
    }
    if(i==strlen(s)) return 1;
    return 0;
}
485. Max Consecutive Ones
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max=0,c=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]) c++;
        else{
            if(max<c){
                max=c;
            }
             c=0;
        }
    }
    return (max>c)?max:c;
}
507. Perfect Number
bool check(int num){
    if(num<=1) return 0;
    int sum=1;
   for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            sum+=i;
            int div=num/i;
            if(div!=i)
            {
                sum+=div;
            }
        }
    }
    if(sum==num) return 1;
    return 0;
}
bool checkPerfectNumber(int num) {
    return check(num);
}
509. Fibonacci Number
int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}
2206. Divide Array Into Equal Pairs
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int ,int> m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:m){
            if(i.second%2){
                return 0;
            }
        }
          return 1;
    } 
};
2404. Most Frequent Even Element
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int ,int >mpp;
        for(auto i:nums){
            if((i%2 == 0)) mpp[i]++;
        }
        if(mpp.size() == 0) return -1;
        int max=0,ele=-1;
        for(auto i:mpp){
            if(i.second > max) {
                ele = i.first;
                max=i.second;
            }
        }
        return ele;
    }
};
1051. Height Checker
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> a;
       a=heights;
        sort(heights.begin(),heights.end());
        int cnt=0;
        for(int i=0;i<heights.size();i++){
            if(a[i]!=heights[i]){
                cnt++;
            }
        }
        return cnt;
    }
};

1184. Distance Between Bus Stops
int distanceBetweenBusStops(int* distance, int distanceSize, int start, int destination){
int sum=0,dis=0;
for(int i=0;i<distanceSize;i++){
    sum+=distance[i];
    if(start<destination){
    if(i>=start && i<destination){
        dis+=distance[i];
    }
    }
    else{
       if(i>=destination && i<start){
        dis+=distance[i];
    } 
    }
}
return (sum-dis>dis)?dis:sum-dis;
}
1460. Make Two Arrays Equal by Reversing Subarrays
//c
bool canBeEqual(int* target, int targetSize, int* arr, int arrSize) {
    int f[1001]={0},ft[1001]={0};
    if(targetSize!=arrSize) return 0;
    for(int i=0,j=0;i<targetSize,j<arrSize;i++,j++){
        f[target[i]]++;
        ft[arr[i]]++;
    }
    for(int i=1;i<=1000;i++){
        if(f[i]!=ft[i]){
            return 0;
        }
    }
    return 1;
}
//c++
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
       sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());

        return target==arr;
//        unordered_map<int,int> freq1;
//	one more method
//         unordered_map<int,int> freq2;
//         for(int i=0; i< arr.size() ;i++){
//             freq1[arr[i]]++;
//         }
//          for(int j=0; j< target.size() ;j++){
//             freq2[target[j]]++;
//         }
//          return freq1 == freq2;
    }
};
1464. Maximum Product of Two Elements in an Array
int smp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int maxProduct(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),smp);
    return ((nums[numsSize-1]-1)*(nums[numsSize-2]-1));
}
628. Maximum Product of Three Numbers
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       return max((nums[0]*nums[1]*nums[n-1]),(nums[n-1]*nums[n-2]*nums[n-3]));
        
    }
};
3467. Transform Array by Parity
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int c0=0,c1=0;
        for(auto i:nums){
            if(i%2==0) c0++;
            else c1++;
        }
        vector<int> re(c0);
    for(int i=0;i<c1;i++){
       re.push_back(1);
    }
       return re;
    }
};
747. Largest Number At Least Twice of Others
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ma=-1,id=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>ma){
                ma=nums[i];
                id=i;
            }
        }
        sort(nums.begin(),nums.end());
        if(nums[nums.size()-1]>=nums[nums.size()-2]*2)
        return id;
        return -1;
    }
};
387.First Unique Character in a String
int firstUniqChar(char* s) {
    int freq[256] = {0}; 
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        freq[s[i]]++;
    }

    for (int i = 0; i < len; i++) {
        if (freq[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}
2148. Count Elements With Strictly Smaller and Greater Elements 
int countElements(int* nums, int numsSize) {
    int cnt=0,max=nums[0],min=nums[0];
    for(int i=0;i<numsSize;i++){
       if(max<nums[i]) max=nums[i];
       if(min>nums[i]) min=nums[i];
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=max && nums[i]!=min) cnt++;
    }
    return cnt;
    return 0;
}
2465. Number of Distinct Averages
class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        unordered_map<float,int>mpp;
        while(i<j){
           float av=(nums[i]+nums[j])/2.0;
           mpp[av]++;
            i++,j--;
        }
        return mpp.size();
    }
};
645. Set Mismatch
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    *returnSize=2;
    int *ptr=(int*)calloc(2,sizeof(int));
    int *f=(int*)calloc(numsSize+1,sizeof(int));
    for(int i=0;i<numsSize;i++){
        f[nums[i]]++;
    }
    for(int i=1;i<numsSize+1;i++){
        if(f[i]==2) ptr[0]=i;
        if(f[i]==0) ptr[1]=i;  
    }
    return ptr;
}
3442. Maximum Difference Between Even and Odd Frequency I
int maxDifference(char* s) {
 int *ptr=(int*)calloc(26,sizeof(int));
    for(int i=0;s[i]!='\0';i++){
        ptr[s[i]-'a']++;
    }
    int maxo=0,mine=100;
    for(int i=0;i<=25;i++){
        if(ptr[i]==0) continue;
        if(ptr[i]%2!=0) maxo=ptr[i]>maxo?ptr[i]:maxo;
         if(ptr[i]%2==0) mine=ptr[i]<mine?ptr[i]:mine;
     }
     return maxo-mine;
}
3370. Smallest Number With All Set Bits
int smallestNumber(int n) {
    int c=0,len=0;
    while(n){
        len++;
        n/=2;
    }
    return pow(2,len)-1;
}

