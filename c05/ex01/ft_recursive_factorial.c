/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:48:44 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/27 16:20:57 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
}
/*int main()
{
	int nb;

	nb = 10;
	printf("%d", ft_recursive_factorial(nb));
}*/
