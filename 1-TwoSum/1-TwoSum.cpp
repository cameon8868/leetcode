// Временная сложность O(n^2)
// Пространственная сложность О(1)

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> arr;
        for(int i=0; i!=nums.size();i++){
            for(int j=0;j!=nums.size();j++){
                if(i!= j && nums[i] + nums[j] == target){
                    arr.push_back(i);
                    arr.push_back(j);
                    return arr;
                }

            }
        }
        return arr;
    }
};