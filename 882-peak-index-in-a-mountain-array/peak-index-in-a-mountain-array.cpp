class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, end = arr.size()-2;

        while(st <= end ){
            int mid = st + (end - st)/2;
            //check karte hai peak mid me hi toh nhi hai
            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                return mid;
            }
            //now check mid kha lie karta hai left or right(inc or dec order me);
            else if(arr[mid] > arr[mid-1]){ //right
                st = mid+1; 
            }else{      // move right (dec)
                end = mid -1;
            }
        }
        return -1;
    }
};