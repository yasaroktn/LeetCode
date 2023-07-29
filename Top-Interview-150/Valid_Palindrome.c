bool isPalindrome(char * s){
    int i = 0;
    int j = 0;
    while (s[i] != '\0')
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
    i = 0;
    j--;
    while (i <= j)
    {
        if (s[i] != s[j])
            return(0);
        i++;
        j--;
    }
    return(1);
}
