int compare(const void *arg1, const void *arg2){
    return (*(int *)arg1 - *(int *)arg2);
}

int arrayPairSum(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), compare);
    int result = 0;
        
    for(int i = 0; i < numsSize; i = i + 2)
        result = result + *(nums+i);
            
    return result;
}
