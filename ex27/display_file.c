/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 21:34:25 by ael-habc          #+#    #+#             */
/*   Updated: 2019/03/25 21:35:28 by all-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int		ret;
	int		fd1;
	char	buf[BUF_SIZE + 1];
	int		i;

	if (argc > 2)
		return (write(2, "Too many arguments.\n", 20));
	if (argc == 1)
		return (write(2, "File name missing.\n", 19));
	fd1 = open(argv[1], O_RDONLY);
	ret = read(fd1, buf, BUF_SIZE);
	buf[ret] = '\0';
	i = 0;
	while (buf[i] != '\0')
		write(1, &buf[i++], 1);
	return (0);
}
