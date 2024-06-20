/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:13:07 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/27 16:19:15 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	i;

	f = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
/*int	main()
{
	int	nb;

	nb = 10;
	printf("%d", ft_iterative_factorial(nb));
}*/
