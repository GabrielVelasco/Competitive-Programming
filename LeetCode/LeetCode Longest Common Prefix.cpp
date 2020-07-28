bool compare(string a, string b){
    int as = a.size(), bs = b.size();
    return as < bs;
}

class Solution {
public:   
    
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())    return "";
        sort(strs.begin(), strs.end(), compare); // increasing order by str size
        int lenLines = strs.size(), lenColum = strs[0].size();
        int count, lenStrs = strs.size();
        string ans = "";
        for(int j = 0; j < lenColum; j++){
            count = 1;
            for(int i = 1; i < lenLines; i++){
                if(strs[i][j] == strs[0][j]){
                    count ++;
                }else{
                    break;
                }
            }
            if(count == lenStrs){
                ans.push_back(strs[0][j]);
            }else{
                break;
            }
        }
        
        return ans;
    }
    
};