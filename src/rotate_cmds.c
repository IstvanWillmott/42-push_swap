void ra(int *stacka, int stacklen)
{
	int	i;
	int strg;

	i = 0;
	strg = stacka[0];
	while (i < stacklen - 1)
	{
		stacka[i] = stacka[i + 1];
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
	while (i < stacklen - 1)
	{
		stackb[i] = stackb[i + 1];
		i++;
	}
	stackb[stacklen - 1] = strg;
}

void rr(int *stacka, int *stackb, int stacklen)
{
	ra(stacka, stacklen);
	rb(stackb, stacklen);
}
