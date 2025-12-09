1195. Fizz Buzz Multithreaded
To be solve-->>
*****315. Count of Smaller Numbers After Self
**1385. Find the Distance Value Between Two Arrays
//2843. Count Symmetric Integers
Top K Frequent Elements
Medium
376. Wiggle Subsequence
//164.
**724.
1637. Widest Vertical Area Between Two Points Containing No Points
*2274. Maximum Consecutive Floors Without Special Floors
//1991. Find the Middle Index in Array
2670. Find the Distinct Difference Array
2389. Longest Subsequence With Limited Sum
2713. Maximum Strictly Increasing Cells in a Matrix
2815. Max Pair Sum in an Array
1046. Last Stone Weight
2215. Find the Difference of Two Arrays
788. Rotated Digits
Sort Array by Increasing Frequency
Sum of Numbers With Units Digit K
Medium
Number of Ways to Buy Pens and Pencils
Medium
Sort Characters By Frequency
Medium
2399
2255
1455
**2342.
3083. Existence of a Substring in a String and Its Reverse
//Maximum Number of Pairs in Array
Node With Highest Edge Score
Medium
Sort the People
Node With Highest Edge Score
Medium
Count Pairs Of Similar Strings
//3492. Maximum Containers on a Ship
Easy
**2376. Count Special Integers
**1012.
//3146. Permutation Difference between Two Strings
//Count the Number of Consistent Strings
Find Winner on a Tic Tac Toe Game
//2784. Check if Array is Good
//2652. Sum Multiples
//1103. Distribute Candies to People
500. Keyboard Row
//2089. Find Target Indices After Sorting Array
//2190.Most Frequent Number Following Key In an Array
//1470.
//1732.
//2574.
//2942.
//2824.
//3110.
//2078.
//Fizz Buzz
//1678. Goal Parser Interpretation
//2679. Sum in a Matrix
//Find if Digit Game Can Be Won
//2164. Sort Even and Odd Indices Independently
//1945. Sum of Digits of String After Convert
//1475. Final Prices With a Special Discount in a Shop
//455. Assign Cookies
//922. Sort Array By Parity II
//287. Find the Duplicate Number
//2529. Maximum Count of Positive Integer and Negative Integer
//1837. Sum of Digits in Base K
//2460. Apply Operations to an Array
//747. Largest Number At Least Twice of Others
//Find the Pivot Integer
//Defanging an IP Address
//Sum of Digits of String After Convert
//Easy
//Separate the Digits in an Array
//Easy
//First Unique Character in a String
//Easy
//Most Frequent Even Element
//Easy
//Maximum Number of Pairs in Array
//Easy
//Divide Array Into Equal Pairs
//Easy
//Percentage of Letter in String
//Easy
//1431.
//912. Sort an Array
Kids With the Greatest Number of Candies
Last Stone Weight
//Can Place Flowers
Teemo Attacking
//Long Pressed Name
Container With Most Water
//Min Max Game
//Find N Unique Integers Sum up to Zero
//2864. Maximum Odd Binary Number
2899. Last Visited Integers
2129. Capitalize the Title
//848.
2303.
496.
3438. Find Valid Pair of Adjacent Digits in String
//Replace Elements with Greatest Element on Right Side
//Check if Matrix Is X-Matrix
//Matrix Diagonal Sum
//Bulb Switcher
//3131. Find the Integer Added to Array I
//Best Poker Hand
//771. Jewels and Stones
//Maximum Difference Between Increasing Elements
//Best Time to Buy and Sell Stock
//Redistribute Characters to Make All Strings Equal
//Remove All Adjacent Duplicates In String
//Minimize String Length
3522. Calculate Score After Performing Instructions
Convert to Base -2
class Solution {
public:
    string baseNeg2(int n) {
        if(n==0) return "0";
        string ans;
        while(n!=0){
            int l=n%(-2);
            n/=(-2);
            if(l<0){
                l+=2;
                n+=1;
            }
            ans.push_back(l+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
Decode the Message
char* decodeMessage(char* key, char* message) {
    int frr[26] = {0};
    int idx = 0;
    for(int i = 0; key[i] != '\0'; i++){
        if(key[i] != ' ' && frr[key[i] - 'a'] == 0){
            key[idx++] = key[i];
            frr[key[i] - 'a'] = -1;
        }
    }
    int Decode[26] = {0};
    for(int i = 0; i < idx; i++){
        Decode[key[i] - 'a'] = i ;
    }
    for(int i = 0; message[i] != '\0'; i++){
        if(message[i] != ' '){
            message[i] = Decode[message[i] - 'a'] + 'a';
        }
    }
    return message;

}
Maximum Number of Words Found in Sentences
Build Array from Permutation
 Transpose Matrix
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int ** Ans = (int **)malloc( matrixColSize[0] * sizeof(int*));
    for(int i = 0; i < matrixColSize[0]; i++){
        Ans[i] = (int *)malloc(matrixSize * sizeof(int));
    }
    *returnSize = matrixColSize[0];
    *returnColumnSizes = (int *)malloc(matrixColSize[0] * sizeof(int));
    for(int i = 0; i < matrixColSize[0]; i++){
        
        (*returnColumnSizes)[i] = matrixSize;
    }

    for(int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixColSize[i]; j++){
            Ans[j][i] = matrix[i][j];
        }
    }
    return Ans;

    
}
Count Items Matching a Rule
int GetAns(char*** items,int n,char* rule,int idx){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(rule,items[i][idx]) == 0)cnt++;
    }
    return cnt;
}

int countMatches(char*** items, int itemsSize, int* itemsColSize, char* ruleKey, char* ruleValue) {
    if(strcmp(ruleKey , "type") == 0)return GetAns(items,itemsSize,ruleValue,0);
    if(strcmp(ruleKey,"color") == 0)return GetAns(items,itemsSize,ruleValue,1);
    return GetAns(items,itemsSize,ruleValue,2);
    
}
Count Prefixes of a Given String
int countPrefixes(char** words, int wordsSize, char* s) {
    int cnt = 0;
    for(int i = 0; i < wordsSize; i++){
        int flag = 0;
        for(int j = 0; words[i][j] != '\0';  j++){
            if(words[i][j] != s[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0)cnt++;
    }
    return cnt;
}
//Counting Words With a Given Prefix
//Check If String Is a Prefix of Array
//Check Balanced String
//Reverse Words in a String III
1209. Remove All Adjacent Duplicates in String II
//********to be complete
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void mer(int *a,int start,int mid,int end){
    int i=start ,j=mid+1;
    int b[end-start+1],k=0;
    while(i<=mid&&j<=end){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
        }
    }
    while(i<=mid) b[k++]=a[i++];
    while(j<=mid) b[k++]=a[j++];
    k=0;
    for(i=start;i<=end;i++){
        a[i]=b[k++];
    }
 }
 void sort(int *a,int start,int end){
    if(start>=end) return;
    int mid=start+(end-start)/2;
    sort(a,start,mid);
    sort(a,mid+1,end);
    mer(a,start,mid,end);
 }
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    sort(nums,0,numsSize-1);
    int *prt=(int *)malloc((numsSize)*sizeof(int));
    int mid,l=0,r=numsSize-1,idx=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(nums[mid]==target){
            prt[idx++]=mid;
        }
        if(nums[mid]>target) r=mid-1;
        else l=mid+1;
    }
    //prt[idx]=l;
    sort(prt,0,idx-1);
    *returnSize=idx;
    return prt;
    return 0;
}
*********1769. Minimum Number of Operations to Move All Balls to Each Box
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        int steps=0,box=0;
        vector<int>left;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            steps=steps+box;
             left.push_back(steps);
            if(boxes[i]=='1'){
                box++;
            }
        }        
            steps=0;
            box=0;
        for(int i=n-1;i>=0;i--){
            steps=steps+box;
             ans[i]=left[i]+steps;
            if(boxes[i]=='1'){
                box++;
            }
        }
        return ans;
    }
};
Design an Ordered Stream
typedef struct {
    int n;
    char** str;
    int* frr;
} OrderedStream;
OrderedStream* orderedStreamCreate(int n) {
    OrderedStream* obj = (OrderedStream *)malloc(sizeof(OrderedStream));
    obj->str = (char**)calloc(n , sizeof(char*));
    for(int i = 0; i < n; i++){
        obj->str[i] = (char*)calloc(6, sizeof(char));
    }
    obj->frr = (int*)calloc(n , sizeof(int));
    obj->n = n;
    return obj;
}

char** orderedStreamInsert(OrderedStream* obj, int idKey, char* value, int* retSize) {
    strcpy(obj->str[idKey - 1], value);
    obj->frr[idKey - 1] = 1;
    int cnt = 0;
    int idx = 0;
    while( idx < obj->n && (obj->frr[idx]) != 0 ){
        if(obj->frr[idx] == 1)cnt++;
        idx++;
    }
    *retSize = cnt;
    char** Ans = (char**)calloc(cnt ,sizeof(char*));
    for(int i = 0; i < cnt; i++){
        Ans[i] = (char*)calloc(6 , sizeof(char));
    }
    int ansidx = 0;
    for(int i = 0; i < idx; i++){
        if(obj->frr[i] == 1){
           strcpy(Ans[ansidx],obj->str[i]);
           ansidx++;
           obj->frr[i] = -1;
        }
    }
    return Ans;
}

void orderedStreamFree(OrderedStream* obj) {
    free(obj);
}
/**
 * Your OrderedStream struct will be instantiated and called as such:
 * OrderedStream* obj = orderedStreamCreate(n);
 * char** param_1 = orderedStreamInsert(obj, idKey, value, retSize);
 
 * orderedStreamFree(obj);
*/
Number of Arithmetic Triplets
int arithmeticTriplets(int* nums, int numsSize, int dif) {
    int cnt = 0;
    for(int i = 0; i < numsSize - 2; i++){
        for(int j = i + 1; j < numsSize - 1; j++){
            if(nums[j] - nums[i] == dif){
                for(int k = j + 1; k < numsSize; k++){
                    if(nums[k] - nums[j] == dif)cnt++;
                    else if(nums[k] - nums[j] > dif)break;
                }
            }else if(nums[j] - nums[i] > dif){
                break;
            }
        }
    }
    return cnt;
}
 Count Good Triplets
int countGoodTriplets(int* arr, int arrSize, int a, int b, int c){
    int cnt = 0;
    for(int i = 0; i < arrSize - 2; i++){
        for(int j = i + 1; j < arrSize - 1; j++){
            for(int k = j + 1; k < arrSize; k++){
                if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)cnt++;
            }
        }
    }
    return cnt;
}
// Find the Number of Good Pairs I
Find the K-or of an Array
int findKOr(int* nums, int numsSize, int k) {
    int frr[31] = {0};
    for(int i = 0; i < numsSize; i++){
        for(int j = 0; j < 31; j++){
             frr[j] += (nums[i] >> j ) & 1;
        }
    }
    for(int i = 0; i < 31; i++){
        if(frr[i] >= k)frr[i] = 1;
        else frr[i] = 0;
    }
    int Ans  = 0;
    for(int i = 0; i < 31; i++){
        Ans += pow(2,i) * frr[i];
    }
    return Ans;
}
 Counting Bits
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;
    int* Ans = (int*)calloc(n + 1,sizeof(int));
    for(int i = 0; i <= n; i++){
        int cnt = 0;
        for(int j = 0; j < 30; j++){
            cnt += (i >> j) & 1;
        }
        Ans[i] = cnt;

    }
    return Ans;
}
Sum of Values at Indices With K Set Bits
int sumIndicesWithKSetBits(int* nums, int numsSize, int k) {
    int Ans = 0;
    for(int i = 0; i < numsSize; i++){
        int cnt = 0;
        for(int j = 0; j < 30; j++){
            cnt += (i >> j) & 1;
        }
        if(cnt == k)Ans += nums[i];
    }
    return Ans;
}
//Check If Two String Arrays are Equivalent
//Find Indices of Stable Mountains
//Sum of Variable Length Subarrays
//Find Common Elements Between Two Arrays
Calculate Score After Performing Instructions
Root Equals Sum of Children
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkTree(struct TreeNode* root) {
    if(root->val == root->left->val + root->right->val)return true;
    return false;
}
 Search in a Binary Search Tree
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val) {
    while(root != NULL){
        if(root->val == val)return root;
        else if(val < root->val){
            root = root->left;
        }else{
            root = root->right;
        }
    }
    return NULL;
}
Number of Students Unable to Eat Lunch
int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
    int zcnt = 0;
    int ocnt = 0;
    for(int i = 0; i < studentsSize; i++){
        if(students[i] == 1)ocnt++;
        else zcnt++;
    }
    for(int i = 0; i < sandwichesSize; i++){
        if(sandwiches[i] == 0){
            if(zcnt > 0)zcnt--;
            else return ocnt + zcnt;
        }else{
            if(ocnt > 0)ocnt--;
            else return ocnt + zcnt;
        }
    }
    return zcnt + ocnt;

}
Find First Palindromic String in the Array
int IsPalindrome(char* str){
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++){
        if(str[i] != str[len - i - 1])return 0;
    }
    return 1;
}
char* firstPalindrome(char** words, int wordsSize) {
    for(int i = 0; i < wordsSize; i++){
        if(IsPalindrome(words[i]))return words[i];
    }
    return "";
}
 Max Consecutive Ones
int findMaxConsecutiveOnes(int* nums, int numsSize) {
   int max = 0;
   int cnt = 0;
   for(int i = 0; i < numsSize; i++){
        if(nums[i] == 1){
            cnt++;
            if(cnt > max)max = cnt;
        }
        else {
            if(cnt > max)max = cnt;
            cnt = 0;
        }
   } 
   return max;
}
Consecutive Characters
int maxPower(char* s) {
    int max = 0;
    int i = 0;
    while(s[i] != '\0'){
        char ch = s[i];
        int cnt = 0;
        while(s[i] != '\0' && s[i] == ch){
            cnt++;
            i++;
        }
        if(cnt > max)max = cnt;
    }
    return max;
}
Minimum Number of Chairs in a Waiting Room
int minimumChairs(char* s) {
    int maxpep = 0;
    int cnt = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == 'E'){
            cnt++;
            if(maxpep < cnt)maxpep = cnt;
        }else{
            cnt--;
        }
    }
    return maxpep;
}
//split with minimum sum
//Check if a String Is an Acronym of Words
// Minimum Element After Replacement With Digit Sum
