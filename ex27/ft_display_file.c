/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:09:19 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/16 19:45:13 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_readfile(char *file)
{
	int		fd;
	int		byte;
	char	buffer;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	byte = read(fd, &buffer, 1);
	while (byte == 1)
	{
		ft_putchar(buffer);
		byte = read(fd, &buffer, 1);
	}
	if (byte == -1)
	{
		write(2, "Cannot read file.\n", 18);
		close(fd);
		return (1);
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (ft_readfile(argv[1]));
}
