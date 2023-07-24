int romanToInt(char *str){
    int res = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'I')
        {
            if (str[i+1] == 'V' || str[i+1] == 'X')    
                res --;
            else
                res ++;
        }
        else if (str[i] == 'V')
            res += 5;
        else if (str[i] == 'X')
        {
            if (str[i+1] == 'L' || str[i+1] == 'C')
                res -=10;
            else
                res +=10;
        }
        else if (str[i] == 'L')
            res +=50;
        else if (str[i] == 'C')
        {
            if (str[i+1] == 'D' || str[i+1] == 'M')
                res -=100;
            else
                res +=100;
        }
        else if (str[i] == 'D')
            res +=500;
        else if (str[i] == 'M')
            res +=1000;
    }
    return (res);
}
