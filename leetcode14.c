char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize==0) {
        return "";
    }
    int index =0;
    char c;
    while (c = strs[0][index]) {
        for (int i=1;i<strsSize; i++) {
            if (strs[i][index] != c) {
                strs[0][index] = 0;
                return strs[0];
            }
        }
        index++;
    }
    return strs[0];
}