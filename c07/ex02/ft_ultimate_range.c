/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:19:21 by sycourbi          #+#    #+#             */
/*   Updated: 2022/10/05 17:25:45 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_size(int min, int max)
{
	int	t;

	t = max - min;
	if (t < 0)
		t = t * -1;
	return (t);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*r;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	r = (int *)malloc(ft_size(min, max) * sizeof(int));
	if (!r)
	{
		*range = (0);
		return (-1);
	}
	while (i < ft_size(min, max))
	{
		r[i] = min + i;
		i++;
	}
	*range = r;
	return (ft_size(min, max));
}
/*int	main(void)
{
	int *range;

	printf("%d\n", ft_ultimate_range(&range, -1, 5));
}*/
