Remove Duplicates from Sorted Array

Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

@rohith solution 

```

public:
    int removeDuplicates(vector<int>& nums) 
    {
       
        auto ip=unique(nums.begin(),nums.end());
        nums.resize(std::distance(nums.begin(), ip)); 
        return nums.size();
        
    }
};

```
