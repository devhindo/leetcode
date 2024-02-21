func maxOperations(nums []int) int {
    t := nums[0]+nums[1]
    i := 2
    a := 1
    for {
        if i >= len(nums)-1 {
            break
        }
        if nums[i]+nums[i+1] == t {
            a++
        } else {
            break
        }
        i = i+2
    }
    return a
}