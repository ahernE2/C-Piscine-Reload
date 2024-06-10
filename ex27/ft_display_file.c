/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 19:08:41 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/10 21:31:12 by alejhern         ###   ########.fr       */
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
	int		byte;

	byte = read(fd, &buffer, 1);
	while (byte == 1)
	{
		ft_putchar(buffer);
		byte = read(fd, &buffer, 1);
	}
	if (byte == -1)
		write(2, "Cannot read file.", 17);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
	{
		write(2, "File name missing.", 18);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.", 19);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.", 17);
		return (1);
	}
	ft_display_file(fd);
	close(fd);
	return (0);
}
