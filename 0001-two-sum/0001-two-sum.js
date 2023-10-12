/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    d = {}
    for (let i=0; i<nums.length; i++) {
        if (d[target-nums[i]] != undefined) {
            return [i,d[target-nums[i]]]
        }
        d[nums[i]] = i
    }
};