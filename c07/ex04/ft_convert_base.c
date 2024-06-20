/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:07:40 by sycourbi          #+#    #+#             */
/*   Updated: 2022/10/05 17:45:36 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	d;

	i = 0;
	while (base[i])
	{
		if (ft_strlen(base) <= 1)
			return (0);
		if (base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		d = i + 1;
		while (base[d])
		{
			if (base[i] == base[d])
				return (0);
			d++;
		}
		i++;
	}
	return (1);
}

int	ft_doub_base(char n, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (n == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_check_nbr(char *nbr, char *base)
{
	int	i;
	int	neg;
	int	resultat;

	neg = 1;
	i = 0;
	resultat = 0;
	while (nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (nbr[i] && ft_doub_base(nbr[i], base) != -1)
	{
		resultat = resultat * ft_strlen(base) + ft_doub_base(nbr[i], base);
		i++;
	}
	return (resultat * neg);
}
