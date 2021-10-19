unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int dlen;
    unsigned int slen;

i = 0;
    j = 0;
    dlen = 0;
    slen = 0;
    while (dest[i] != '\0')
    {
dlen++;
        i++;
    } 
while (src[j] != '\0')
{
j++;
slen++;
}
    while (src[j] != '\0' && j < size - dlen -1)
    {
        dest[i] = src[j];
i++;
        j++;
    }
    dest[i] = '\0';
    if (size < dlen)
        return(size + slen); 
    else
        return(slen + dlen); 
    
}
