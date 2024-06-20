/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:47:40 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/28 12:56:21 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_pos_neg(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == '-' || base[i] == '+')
				return (0);
			if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
				return (0);
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_deb_chaine(char str, char *base)
{
	int	z;

	z = 0;
	while (base[z] != '\0')
	{
		if (str == base[z])
			return (z);
		z++;
	}
	return (-1);
}

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	resultat;
	int	moins;

	moins = 1;
	if (ft_pos_neg(base) == 0 || ft_strlen(base) <= 1)
		return (0);
	resultat = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			moins = moins * -1;
		i++;
	}
	while (str[i] != '\0' && ft_deb_chaine(str[i], base) != -1)
	{	
		resultat = resultat * ft_strlen(base) + ft_deb_chaine(str[i], base);
		i++;
	}
	return (resultat * moins);
}
int	main(void)
{
	printf("42:%d\n", ft_atoi_base("2a", "0123456789afbcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a'2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-011101010110", "01"));
	printf("0:%d\n", ft_atoi_base("   --------+-mriearimeaiem", "marie"));
	printf("0:%d\n", ft_atoi_base("   42", "01"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}
