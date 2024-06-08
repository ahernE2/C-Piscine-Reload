/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 00:40:38 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/08 03:08:29 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
		return (range);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
int main() {
    int min = 50;
    int max = 10;
    int *range = ft_range(min, max);

    if (range) {
        printf("ft_range(%d, %d): ", min, max);
        for (int i = 0; i < max - min; ++i) {
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range);
    } else {
        printf("Invalid range: ft_range(%d, %d)\n", min, max);
    }
    return 0;
}*/
