 Array of Doubled Pairs
 
 /*
 
 Given an array of integers A with even length, return true if and only if it is possible to reorder it such that A[2 * i + 1] = 2 * A[2 * i] for every 0 <= i < len(A) / 2.

 

Example 1:

Input: [3,1,3,6]
Output: false
Example 2:

Input: [2,1,2,6]
Output: false
Example 3:

Input: [4,-2,2,-4]
Output: true
Explanation: We can take two groups, [-2,-4] and [2,4] to form [-2,-4,2,4] or [2,4,-2,-4].
Example 4:

Input: [1,2,4,16,8,4]
Output: false
 */


class Solution {
public:
    static bool compare(int a,int b){
        return abs(a)<abs(b);
    }
    bool canReorderDoubled(vector<int>& A) 
    {
        int n=A.size();
       sort(A.begin(),A.end(),compare);
        map<int,int> hmap;
        for(auto i: A)
        {
            hmap[i]++;
        }
        int temp;
        for(int i=0;i<n-1;i++)
        {
            temp=2*A[i];
            if(hmap[A[i]]==0) 
              continue;
            if(hmap[temp]==0)
                return false;
            hmap[temp]--;
            hmap[A[i]]--;
        }
             return true;
    }
};
