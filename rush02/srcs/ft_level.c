/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_level.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh-ngu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:30:01 by minh-ngu          #+#    #+#             */
/*   Updated: 2022/10/02 16:42:12 by auferran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include<stdlib.h>

char	*level1(char **a_s, char *nbr, char *str)
{
	char	s[2];

	s[0] = nbr[0];
	s[1] = 0;
	if (nbr[0] == '0')
		return ("");
	return (ft_strcat(str, ft_dict(a_s, &s[0]), 1));
}

char	*level2(char **a_s, char *nbr, char *str)
{
	char	s[3];

	s[0] = nbr[0];
	s[1] = nbr[1];
	s[2] = 0;
	if (s[0] == '0')
		return (level1(a_s, &s[1], str));
	if (s[0] == '1' || (s[0] > '1' && s[1] == '0'))
		return (ft_strcat(str, ft_dict(a_s, s), 1));
	if (s[0] > '1')
	{
		s[1] = '0';
		str = ft_strcat(str, ft_dict(a_s, s), 1);
		str = ft_strcat(str, SEP, 0);
		str = level1(a_s, &nbr[1], str);
		return (str);
	}
	return (0);
}

char	*level3(char **a_s, char *nbr, char *str)
{
	if (nbr[0] == '0' && nbr[1] == '0' && nbr[2] == '0')
		return (str);
	if (nbr[0] != '0')
	{
		str = level1(a_s, nbr, str);
		str = ft_strcat(str, SEP, 0);
		str = ft_strcat(str, ft_dict(a_s, "100"), 1);
		str = ft_strcat(str, SEP, 0);
	}
	str = level2(a_s, &nbr[1], str);
	return (str);
}

char	*triple0(char **a_s, char *nbr, char *str)
{
	int		i;
	int		n;
	char	*s2;

	n = ft_strlen(nbr);
	s2 = malloc(sizeof(char) * 1000);
	s2[0] = '1';
	i = 1;
	while (i <= (n - n % 3))
		s2[i++] = '0';
	s2[i] = 0;
	str = ft_strcat(str, SEP, 0);
	str = ft_strcat(str, ft_dict(a_s, s2), 1);
	return (str);
}

char	*level(char **a_s, char *nbr, char *str)
{
	int	n;

	n = ft_strlen(nbr);
	if (!(nbr[0] == '0' && nbr[1] == '0' && nbr[2] == '0'))
	{
		str = ft_strcat(str, SEP, 0);
		str = level3(a_s, nbr, str);
	}
	if (n > 3)
	{
		if (!(nbr[0] == '0' && nbr[1] == '0' && nbr[2] == '0'))
			str = triple0(a_s, &nbr[3], str);
		str = level(a_s, &nbr[3], str);
	}
	return (str);
}
