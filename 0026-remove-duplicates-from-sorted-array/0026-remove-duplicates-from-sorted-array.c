int removeDuplicates(int* nums, int numsSize) {
    int i,j=0,arr[numsSize];
    for(i=0; i<numsSize; i++){
        arr[i]=0;
    }
    arr[j++]=nums[0];
    for(i=1; i<numsSize; i++){
        if(arr[j-1]<nums[i]){
            arr[j++]=nums[i];
        }
    }
    for(i=0; i<j; i++){
        nums[i]=arr[i];
    }
    return j;
}