class Solution {
private:
    // T: O(2^N)
    void combination(vector<int>& candidates, int target, vector<int>& curr_comb, int curr_sum, int curr_index, vector<vector<int>>& result){
        if(curr_sum > target) return;
        if(curr_sum == target){
            result.push_back(curr_comb);
            return;
        }
        for(int i = curr_index; i < candidates.size(); i++){
            curr_comb.push_back(candidates[i]);
            curr_sum += candidates[i];
            combination(candidates, target, curr_comb, curr_sum, i, result);
            curr_comb.pop_back();
            curr_sum -= candidates[i]; 
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> currentCombination;
        combination(candidates, target, currentCombination, 0, 0, result);
        return result;
    }
};