#include <stdlib.h>

int *ft_range(int min, int max)
{
int *num;
int i;
int j;

j = 0;
i = min;
if (min >= max)
return (NULL);
num = (int *)malloc(sizeof(int) * (max - min));

while (i < max)
{
num[j] = i;
i++;
j++;
}
return (num);
}
