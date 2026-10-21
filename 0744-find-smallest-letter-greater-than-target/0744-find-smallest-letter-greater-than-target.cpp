class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low=0;
        int high=letters.size()-1;
        if(target>letters[high]) return letters[low];
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(letters[mid]<=target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        if (low < letters.size()) {
            return letters[low];
        }
        return letters[0];
    }
};