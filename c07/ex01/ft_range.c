/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:06:39 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/28 15:43:57 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_neg(int min, int max)
{
	int	l;

	l = max - min;
	if (l < 0)
		l = l * -1;
	return (l);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*tabi;
	int	t;

	i = 0;
	if (min >= max)
		return (0);
	t = ft_neg(min, max);
	tabi = (int *)malloc(sizeof(int) * t);
	if (!tabi)
		return (0);
	while (i < ft_neg(min, max))
	{
		tabi[i] = min + i;
		i++;
	}
	return (tabi);
}
/*int	main(void)
{
	int *range;
	
	range = ft_range(-1, 1);
	printf("%d, %d", range[0], range[1]);
}*/
