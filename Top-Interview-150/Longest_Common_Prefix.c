char * longestCommonPrefix(char ** strs, int strsSize){
    int i =  1;
    int j = 0;
    char *str = malloc(sizeof(char *));
    str = strs[0];
    while (i < strsSize)
    {
        while (strs[i][j])
        {
            if (str[j] != strs[i][j])
                break;
            j++;
        }
        str[j] = '\0';
        j=0;
        i++;
    }
    return(str);
}