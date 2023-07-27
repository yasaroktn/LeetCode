int lengthOfLastWord(char * s){
    int res = 0;
    int i = strlen(s) - 1;
    while (s[i] == ' ')
        i--;
    while (i >= 0 && s[i] != ' ' )
    {
        i--;
        res++;
    }
    return (res);
}