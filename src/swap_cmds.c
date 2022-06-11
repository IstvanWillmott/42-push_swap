void sa(int *stacka)
{
	int	i;

	i = 0;
	i = stacka[0];
	stacka[1] = stackb[0];
	stackb[0] = i;
}

void sb(int *stackb)
{
	int	i;
	i = 0;
	i = stacka[0];
	stacka[1] = stackb[0];
	stackb[0] = i;
}

void ss(int *stacka, int *stackb)
{
	sa(&stacka);
	sb(&stackb);
}
