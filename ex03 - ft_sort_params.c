#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_sort_params(char **arv, int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < size -1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(arv[i], arv[j]) > 0)
			{
				tmp = arv[i];
				arv[i] = arv[j];
				arv[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		ft_sort_params(argv + 1, argc - 1);
	}
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}*/
