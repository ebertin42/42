int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	char	chiffre[4] = {0, 0, 0, 1};

	while (!((chiffre[0] == 9) && (chiffre[1] == 9)))
	{
		ft_putchar(chiffre[0] + 48);
		ft_putchar(chiffre[1] + 48);
		ft_putchar(' ');
		ft_putchar(chiffre[2] + 48);
		ft_putchar(chiffre[3] + 48);
		if (!((chiffre[0] == 9) && (chiffre[1] == 8)))
			ft_putchar(',');
		if (!((chiffre[0] == 9) && (chiffre[1] == 8)))
			ft_putchar(' ');
		chiffre[3]++;
		if ((chiffre[3] = chiffre[3] % 10) == 0)
			chiffre[2] = (chiffre[2] + 1);
		if (chiffre[2] == 10)
		{
			chiffre[2] = chiffre[0];
			chiffre[1]++;
			if (( chiffre[1] = chiffre[1] % 10) == 0)
				chiffre[0]++;
			chiffre[3] = chiffre[1] + 1;
		}
	}
}