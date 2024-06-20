/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:55:34 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/27 16:27:02 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		nb = ft_recursive_power(nb, power - 1) * nb;
	}
	return (nb);
}
/*int main()
{
	int nb;
	int power;

	nb = 2;
	power = 5;
	printf("%d", ft_recursive_power(nb, power));
}*/
