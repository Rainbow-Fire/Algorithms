class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){return 0;}
        
    //index represents the place where the value will go in array
        int index = 1; 
    //we start at index 1 because value at index 0 is always unique
        
        //we will do nums.size()-1 because we will compare the second
        //last element with the last element and we dont wanna go 
        //out of the bound 
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] != nums[i+1]){
                //if consecutive numbers are not the same
                //we will place the element at that index in the array
                nums[index] = (nums[i+1]);
                index++;
            }
        }
          
        return index;
    } //end of the removeDuplicates function 
    
    /*NOTES :
    Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
    dont appraoch with whta happens when they are equal 
    approach with the case when they are not equal because 
    we only case first unique number of elements as it was encoded 
    in the instruction by :
    It doesn't matter what values are set beyond the returned length.
    */
};
