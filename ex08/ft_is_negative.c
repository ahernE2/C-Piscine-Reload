/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 20:53:59 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/06 20:54:11 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	signo;

	if (n >= 0)
	{
		signo = 'P';
	}
	else
	{
		signo = 'N';
	}
	write(1, &signo, 1);
}
/*
int main(){
	ft_is_negative(-5);
	return 0;
}
*/
