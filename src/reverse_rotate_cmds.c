void rra(int *stacka, int stacklen)
{
	int	i;
	int strg;

	i = stacklen - 1;
	strg = stacka[i];
	while (i > 0)
	{
		stacka[i] = stacka[i - 1];
		i--;
	}
	stacka[0] = strg;
}

void rrb(int *stackb, int stacklen)
{
	int	i;
	int strg;

	i = stacklen - 1;
	strg = stackb[i];
	while (i > 0)
	{
		stackb[i] = stackb[i - 1];
		i--;
	}
	stackb[0] = strg;
}

void rrr(int *stacka, int *stackb, int stacklen)
{
	rra(stacka, stacklen);
	rrb(stackb, stacklen);
}
