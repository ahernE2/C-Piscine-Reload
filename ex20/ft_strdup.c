/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:01:27 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/15 21:25:15 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*cpy;

	size = ft_str_len(src) + 1;
	cpy = (char *)malloc(size * sizeof(char));
	if (cpy == NULL)
	{
		return (cpy);
	}
	ft_strcpy(src, cpy);
	return (cpy);
}
/*
int main() {
    // Cadena original
    char *cadena_original = "Hola, mundo";

    // Duplicar la cadena original usando ft_strdup
    char *cadena_duplicada = ft_strdup(cadena_original);
    if (cadena_duplicada != NULL) {
        // Imprimir la cadena original y la duplicada
        printf("Cadena original: %s\n", cadena_original);
        printf("Cadena duplicada: %s\n", cadena_duplicada);

        // Liberar la memoria asignada para la cadena duplicada
        free(cadena_duplicada);
    } else {
        // Manejar el caso donde la duplicación falló
        printf("%s", "Error: No se pudo duplicar la cadena\n");
    }

    return 0;
}
*/
