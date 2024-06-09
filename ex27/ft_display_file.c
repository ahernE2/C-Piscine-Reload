/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 19:08:41 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/09 19:51:15 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_file(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1))
		ft_putchar(buffer);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
	{
		write(1, "File name missing.", 18);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.", 19);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		write(1, "Cannot read file.", 17);
	ft_display_file(fd);
	close(fd);
	return (0);
}
