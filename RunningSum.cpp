#include <vector>
#include <iostream>


class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        std::vector<int> res;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++){
            sum +=nums[i];
            res.push_back(sum);
        }
        return res;
    }
};
template <typename T>
bool comparison (std::vector<T>& expected, std::vector<T>& result){
    for (int i = 0; i < expected.size(); i++){
        if (expected[i] != result[i]){
            return false;
        }
    }
    return true;
}

int main(){
    
    Solution s;
    std::vector<int> input1 = {1,2,3,4};
    std::vector<int> input2 = {1,1,1,1,1};
    std::vector<int> input3 = {3,1,2,10,1};
    
    std::vector<int> expected1 = {1,3,6,10};
    std::vector<int> expected2 = {1,2,3,4,5};
    std::vector<int> expected3 = {3,4,6,16,17};
    
    std::vector<int> result1 = s.runningSum(input1);
    std::vector<int> result2 = s.runningSum(input2);
    std::vector<int> result3 = s.runningSum(input3);
    
    std::cout << "1: " << comparison (expected1, result1) << std::endl;
    std::cout << "2: " << comparison (expected2, result2) << std::endl;
    std::cout << "3: " << comparison (expected3, result3) << std::endl;
    return 0;
}