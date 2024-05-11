func isAnagram(s string, t string) bool {
    
    if len(s) != len(t) {
        return false
    }
    
    m := make(map[rune]int)
    
    for _, e := range s {
        m[e] += 1
    }
    
    for _, e := range t {
        m[e] -= 1
        if m[e] < 0 {
            return false
        }
    }
    
    return true
}