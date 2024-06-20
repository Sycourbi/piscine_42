/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:42:05 by sycourbi          #+#    #+#             */
/*   Updated: 2022/10/05 17:48:42 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_check_nbr(char *nbr, char *base);
int	ft_check_base(char *base);
int	ft_strlen(char *base);
int	ft_doub_base(char n, char *base);

char	*ft_ienchar(int nbr, char *base, char *resultat)
{
	if (nbr < 0)
	{
		resultat[0] = '-';
		resultat[1] = '\0';
		nbr = nbr * -1;
	}
	if (nbr < ft_strlen(base))
	{
		resultat[ft_strlen(resultat)] = base[nbr];
		resultat[ft_strlen(resultat) + 1] = '\0';
	}
	if (nbr >= ft_strlen(base))
	{
		ft_ienchar(nbr / ft_strlen(base), base, resultat);
		ft_ienchar(nbr % ft_strlen(base), base, resultat);
	}
	return (resultat);
}

int	ft_size_int(long int nbr, char *base)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		nbr = nbr / ft_strlen(base);
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		res;
	char	*resultat;
	int		size;

	if (ft_check_base(base_from) == 0 || ft_check_base(base_to) == 0)
		return (NULL);
	res = ft_check_nbr(nbr, base_from);
	size = ft_size_int(res, base_to);
	resultat = (char *)malloc(sizeof(char) * size + 1);
	if (!resultat)
		return (0);
	resultat = ft_ienchar(res, base_to, resultat);
	printf("%d", res);
	printf("%s", resultat);
	return (resultat);
}

/*int main()
{
        char nbr[] = "    \n---+42";
        char base_from[] = "0123456789";
        char base_to[] = "01";
	ft_convert_base(nbr, base_from, base_to);
}*/
