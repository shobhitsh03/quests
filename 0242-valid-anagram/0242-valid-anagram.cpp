class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;

        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        int left=0;
        int right=0;

        while(right<t.length()){
            if(t[right]!=s[left]){
                return false;
            }

            right++;
            left++;
        }
        return true;
    }
};