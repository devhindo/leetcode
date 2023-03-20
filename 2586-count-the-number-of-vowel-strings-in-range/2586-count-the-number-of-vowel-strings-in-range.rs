impl Solution {
    pub fn vowel_strings(words: Vec<String>, left: i32, right: i32) -> i32 {
        let vowels: Vec<char> = ['a', 'e', 'i', 'o', 'u'].to_vec();
        let mut c = 0;
        for i in left..right+1 {
            let mut l = false;
            let mut r = false;
            let i = i as usize;
            for char in vowels.iter() {
                if words[i].chars().nth(0).unwrap() == *char {
                    l = true;
                    break;
                }
            }
            for char in vowels.iter() {
                if words[i].chars().last().unwrap() == *char {
                    r = true;
                    break;
                }
            }
            if(l&&r) {
                c +=1;
            }
        }
        return c;

    }
}