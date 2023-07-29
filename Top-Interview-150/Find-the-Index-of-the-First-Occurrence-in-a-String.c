int control (char * haystack, char * needle, int start)
{
    int i = 0;
    while (needle[i])
    {
        if (needle[i] != haystack[start])
            return(0);
        i++;
        start++;
    }
    return(1);
}

int strStr(char * haystack, char * needle){
    int i = 0;
    while (haystack[i])
    {
        if (control(haystack, needle, i))
        {
            return (i);
        }
        i++;
    }
    return (-1);
}