/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:58:28 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/26 12:30:56 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_double(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_pos_neg(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == 32)
			return (0);
		if (base[i] >= 9 && base[i] <= 13)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	t;

	t = ft_strlen(base);
	if (t <= 1 || ft_double(base) == 0 || ft_pos_neg(base) == 0)
		return ;
	if (nbr < 0 && nbr != -2147483648)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr == -2147483648)
		write(1, -2147483648, 11);
	if (nbr < t)
		ft_putchar(base[nbr]);
	if (nbr >= t)
	{
		ft_putnbr_base(nbr / t, base);
		ft_putnbr_base(nbr % t, base);
	}
}
/*int main()
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "01");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "01234567");
}*/
