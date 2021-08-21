int findPeakUtil(vector<int>& nums, int low,int high, int n)
{
    
    int mid = low + (high - low) / 2;

    // Compare middle element with its
    // neighbours (if neighbours exist)
    if ((mid == 0 || nums[mid - 1] <= nums[mid]) && 
        (mid == n - 1 || nums[mid + 1] <= nums[mid]))
        return mid;

    // If middle element is not peak and its
    // left neighbour is greater than it,
    // then left half must have a peak element
    else if (mid > 0 && nums[mid - 1] > nums[mid])
        return findPeakUtil(nums, low, (mid - 1), n);

    // If middle element is not peak and its
    // right neighbour is greater than it,
    // then right half must have a peak element
    else
        return findPeakUtil(nums, (mid + 1), high, n);
}
    
    
    int findPeakElement(vector<int>& nums) {
        
        int n=nums.size();
        return findPeakUtil(nums, 0, n - 1, n);
        
    }
