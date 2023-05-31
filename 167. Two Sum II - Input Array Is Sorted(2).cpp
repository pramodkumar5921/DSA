class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int>ans;
    if(target<numbers[0]+numbers[1]){
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    if(target>numbers[numbers.size()-1]+numbers[numbers.size()-2]){
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    int i=0, j=numbers.size()-1;
    while(i<j){
        if(target==numbers[i]+numbers[j]){
            return {i+1,j+1};
        }
        else if(target>numbers[i]+numbers[j]){
            i++;
        }
        else{
            j--;
        }
    }
    return ans;
    }
};
