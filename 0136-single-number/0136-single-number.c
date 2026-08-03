int singleNumber(int* nums, int numsSize) {
    int z=0;
    int i=0;
    while(i<numsSize)
    {
        z=z^nums[i];
        i++;


    }
    return z;
    
}