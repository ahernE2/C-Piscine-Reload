/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 20:53:59 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/07 18:33:28 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
