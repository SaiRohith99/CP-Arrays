 Plus One

/*
Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.

*/



class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int sum=0;
        int carry=1;
        for(int i=digits.size()-1;i>=0;i--)
        {
            digits[i]+=carry;
            carry=digits[i]/10;
            digits[i]%=10;
        }
        if(carry)
            digits.insert(digits.begin(),1);
            
        return digits;
        
    }
};    
