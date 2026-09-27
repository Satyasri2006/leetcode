int cnt(int* nums, int numsSize, int val){
    int i,j=0;
    for(i=0; i<numsSize; i++){
        if(nums[i]==val){
            j++;
        }
    }
    return j;
}
int removeElement(int* nums, int numsSize, int val) {
    int i=0, j=numsSize-1;
    while(i<=j){
        while(i<=j&&nums[j]==val){
            j--;
        }
        while(i<=j&&nums[i]!=val){
            i++;
        }
        if(i<j){
            nums[i]=nums[j];
            nums[j]=val;
            i++;
            j--;
        }
    }
    return numsSize-cnt(nums, numsSize, val);
}