int control(char c, char * t, int before)
{
    while(before >= 0)
    {
        if (c == t[before])
            return (before - 1);
        before--;
    }
    return (-2);
}

bool isSubsequence(char * s, char * t){
    int i = strlen(s) - 1;
    int j = strlen(t) - 1;
    while (i >= 0)
    {
        j = control(s[i], t, j);
        if (j == -2)
            return (0);
        i--;
    }
    return (1);
}