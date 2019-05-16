//
// Created by xuyanming on 2019-04-07.
// site: https://leetcode.com/problems/two-sum/description/
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
void printVec(const vector<int>& twoSum);


/**
 *  hash table (一次for循环)
 *  time O(n)
 *  space O(n)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> record;
        for (int i = 0; i < nums.size(); ++i) {

            int result = target - nums[i];
            if (record.find(result) != record.end()) {
                int res[] = {i, record[result]};
                return vector<int>(res, res + 2);
            }
            record[nums[i]] = i;
        }

        printf("has no result \n");
    }
};

void printVec(const vector<int>& twoSum) {
    for (int e : twoSum)
        std::cout << e << " ";
    cout << endl;
}

int main() {

    const int nums[] = {0, 3, 4, 0};
    std::vector<int> num_vec(nums, nums + sizeof(nums));
    int target = 0;
    printVec(Solution().twoSum(num_vec, target));

    return 0;
}