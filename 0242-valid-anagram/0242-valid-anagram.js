/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    
    if (s.length != t.length) {
        return false 
    }
    
    d1 = {}
    for (let i=0; i<t.length; i++) {
        if (d1[t[i]] == undefined) {
            d1[t[i]] = 1
        }
        d1[t[i]] += 1
    }
    
    d2 = {}
    for (let i=0; i<s.length; i++) {
        if (d2[s[i]] == undefined) {
            d2[s[i]] = 1
        }
        d2[s[i]] += 1
    }
    
    for (const e in d1) {
        if (d1[e] != d2[e]) {
            return false
        }
    }
    
    return true
};