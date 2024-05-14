import (
    "sort"
)

type anagram struct {
    key string /* must be sorted */
    members []string
}

func srt(s string) string {
    t := strings.Split(s, "")
    sort.Strings(t)
    return strings.Join(t, "")
} 

func groupAnagrams(strs []string) [][]string {
    
    var a [][]string
    
    d := make(map[string][]int)
    
    for i, e := range strs {
        
        t := srt(e)
        
        d[t] = append(d[t], i)
        
    }
    
    for _, v := range d {
        
        var t []string
        
        for _, e := range v {
            t = append(t, strs[e])
        }
        
        a = append(a, t)
    }
    
    return a
    
    
    
    
    
    
}