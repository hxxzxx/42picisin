#include <stdlib.h>
char*ft_strdup(char *src)
{
char *temp;
int i;

i = 0;
while (src[i])
i++;

temp = malloc(sizeof(src)*i);

if (temp == NULL)
return (0);

i = 0;
while (src[i] != '\0')
{
temp[i] = src[i];
i++;
}
temp[i] = '\0';
return (temp);
}
