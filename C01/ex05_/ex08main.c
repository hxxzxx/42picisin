#include <stdio.h>
void    ft_sort_int_tab(int *tab, int size);
int main(void)
{
    int num[] ={3,5,1,9,8};
    int size;
    int i;

i = 0;
    size = 5;
    ft_sort_int_tab(num,5);

while(size--)
    {
printf("%d",num[i]);
i++;
    }
}
