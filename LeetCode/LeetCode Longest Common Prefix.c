#define min(a, b) ((a) < (b) ? (a) : (b))

char * longestCommonPrefix(char ** strs, int strsSize){
    int i, j, k = 0, smallSize = 1e6, count;
    for(i = 0; i < strsSize; i++)
        smallSize = min(smallSize, strlen(strs[i]));
    
    char* ans = (char*) malloc(350*sizeof(char));
    for(j = 0; j < smallSize; j++){
        count = 1;
        for(i = 1; i < strsSize; i++){
            if(strs[i][j] == strs[0][j])
                count ++;
        }
        if(count == strsSize){
            ans[k] = strs[0][j]; k++;
        }else{
            break;
        }
    }
    
    ans[k] = '\0';
    return ans;
}