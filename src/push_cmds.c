void pa(int *stacka, int *stackb)
{
	int i;

	i = 0;
	i = stackb[0];
	stackb[0] = stacka[0];
	stacka[0] = i;
}
