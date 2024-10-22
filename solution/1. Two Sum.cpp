class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; // 使用unordered_map來加快查找速度
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // 計算補數
            // 檢查補數是否存在於map中
            if (map.find(complement) != map.end()) {
                // 如果找到補數，返回兩個數字的索引
                return {map[complement], i};
            }
            // 將當前數字與其索引加入map中
            map[nums[i]] = i;
        }
        return {}; // 根據題目保證會有解
    }
};