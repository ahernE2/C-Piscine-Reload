/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:06:22 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/06 23:00:26 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_param(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		ft_putchar(argv[i]);
		i++;
	}
	ft_putchar('\n');
	i++;
}


void	ft_sort_params(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_print_param(argv[j]);
				break ;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc >= 1)
		ft_sort_params(argv);
	return (0);
}
