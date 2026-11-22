class Solution {
public:
    int alternateDigitSum(int n) {\
    int count=0;
        string s=to_string(n);
        for(int i=0;i<s.size();i++){
            if(i%2==1){
                count-=(s[i]-'0');
            }
            else{
                count+=(s[i]-'0');
            }
        }
        return (count);
    }
};