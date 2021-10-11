void    ft_putchar(char c);

void    print_row(int x, char start, char middle, char end)
{
    int col;

    col = 0;
    while (col < x)
    {
        if (col == 0)
        {
            ft_putchar(start);
        }
        else if (col == x - 1)
        {
            ft_putchar(end);
        }
        else
        {
            ft_putchar(middle);
        }
        col++;
    }
}

void    rush(int x, int y)
{
    int tempy;

    tempy = 0;
    if (x > 0)
    {
        while (tempy < y)
        {
            if (tempy == 0)
            {
                print_row(x, 'o', '-', 'o');
            }
            else if (tempy == y - 1)
            {
                print_row(x, 'o', '-', 'o');
            }
            else
            {
                print_row(x, '|', ' ', '|');
            }
            tempy++;
            ft_putchar('\n');
        }
    }
}
