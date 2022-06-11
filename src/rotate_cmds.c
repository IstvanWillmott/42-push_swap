void ra(int *stacka, int stacklen)
{
	int	i;
	int strg;

	i = 0;
	strg = stacka[0];
	while (i < stacklen)
	{
		stacklen[i] = stacklen[i + 1];
		i++;
	}
	stacka[stacklen - 1] = strg;
}

void rb(int *stackb, int stacklen)
{
	int	i;
	int strg;

	i = 0;
	strg = stackb[0];
	while (i < stacklen)
	{
		stackb[i] = stackb[i + 1];
		i++;
	}
	stacka[stacklen - 1] = strg;
}
