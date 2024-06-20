/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:11:57 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/26 12:27:54 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
/*int main()
{
	ft_putnbr(750);
	ft_putchar('\n');
	ft_putnbr(-2);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-2147483648);

}*/
