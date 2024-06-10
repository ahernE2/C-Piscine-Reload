/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 21:13:01 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/10 21:22:41 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0 || nb > 12)
		return (0);
	while (nb > 0 && nb != 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
