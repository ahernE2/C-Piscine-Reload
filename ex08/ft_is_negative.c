/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 20:53:59 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/08 22:43:35 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	sign;

	if (n >= 0)
	{
		sign = 'P';
	}
	else
	{
		sign = 'N';
	}
	ft_putchar(sign);
}
/*
int main(){
	ft_is_negative(-5);
	return 0;
}
*/
