// Временная сложность O(n^2)
// Пространственная сложность О(1)
import java.util.ArrayList;
import java.util.List;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        List<Integer> res = new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            for(int j=0;j<nums.length;j++){
                if(i!=j && nums[i] + nums[j] == target){
                    res.add(i);
                    res.add(j);
                    return new int[] { res.get(0), res.get(1) };
                }
            }
        } 
        return new int[] {}; 
    }
}

// 