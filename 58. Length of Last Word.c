int ft_len(char *s)
{
    int i = 0;

    while(s[i] && s[i] != 32)
        i++;
    return (i);
}

int lengthOfLastWord(char* s) {
    
    int i = 0;
    while(s[i])
        i++;
	i--;
    while (i >= 0)
    {
        if (s[i] != 32 && s[i] != 9)
            break;
        i--;
    }
    while(i >= 0)
    {
        if (s[i] == 32 || s[i] == 9)
            break;
        i--;
    }
    i++;
    return(ft_len(&s[i]));
}