/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:40:51 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/27 16:22:52 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	j;
	int	i;

	i = 1;
	j = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i <= power)
	{
		j = j * nb;
		i++;
	}
	return (j);
}
/*int main()
{
	int nb;
	int power;

	nb = 2;
	power = 5;
	printf("%d", ft_iterative_power(nb, power));
}*/
