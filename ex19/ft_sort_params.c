/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 13:15:56 by ael-habc          #+#    #+#             */
/*   Updated: 2019/03/25 13:18:06 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*t;

	t = *a;
	*a = *b;
	*b = t;
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int		main(int arc, char **arv)
{
	int		i;
	int		j;

	i = 1;
	while (i < arc - 1)
	{
		j = i + 1;
		while (j < arc)
		{
			if (ft_strcmp(arv[i], arv[j]) > 0)
				ft_swap(&arv[i], &arv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < arc)
	{
		ft_putstr(arv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
