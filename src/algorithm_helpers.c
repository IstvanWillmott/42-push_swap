int cur_mod(t_brain *brain)
{
    int i;
    int mod;

    i = 0;
    mod = 10;
    while (i < brain->moves)
    {
        mod *= 10;
        i++;
    }
    return (mod);
}

void sort_down(t_brain *brain, int pos)
{
    int i;

    i = 0;
    while (i < (brain->stacklen - pos)
    {
        rra(&*brain);
        i++;
    }
}

void sort_up(t_brain *brain, int pos)
{
    int i;

    i = 0;
    while (i < (brain->stacklen - pos)
    {
        ra(&*brain);
        i++;
    }
}