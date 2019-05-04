/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 13:13:08 by ael-habc          #+#    #+#             */
/*   Updated: 2019/03/25 13:13:30 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);

int		main(int arc, char **arv)
{
	int		i;
	int		j;

	i = 1;
	while (i < arc)
	{
		j = 0;
		while (arv[i][j] != '\0')
		{
			ft_putchar(arv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
