type s struct {
    p bool
    i int
}

func twoSum(nums []int, target int) []int {
    
    d := make(map[int]s)
    
    for i, e := range nums {
        n := target - e
        if d[n].p == true {
            return []int{d[n].i, i}
        }
        
        x := new(s)
        x.p = true
        x.i = i
        
        d[e] = *x
    }
    
    return []int{-1,-1}
}