/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 13:19:56 by ael-habc          #+#    #+#             */
/*   Updated: 2019/03/25 13:20:26 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*res;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	res = (int*)malloc((max - min) * sizeof(*res));
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
