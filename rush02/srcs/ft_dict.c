/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:29:32 by sycourbi          #+#    #+#             */
/*   Updated: 2022/10/02 17:30:59 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../includes/ft.h"
#include <stdlib.h>

int	ft_check_key(char *str)
{
	if (*str != '1')
		return (0);
	str++;
	while (*str)
	{
		if (*str != '0')
			return (0);
		str++;
	}
	return (1);
}

char	*get_key(char *str)
{
	char	*c;
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	c = malloc(sizeof(char) * i);
	if (!c)
		return (0);
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		c[i] = str[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

int	ft_max_len(char **a_s)
{
	char	*key;
	int	max_len;

	max_len = 0;
	while (*a_s)
	{
		key = get_key(*a_s);
		if (ft_check_key(key) && max_len < ft_strlen(key))
			max_len = ft_strlen(key);
		a_s++;
	}
	return (max_len);
}

char	*ft_search(char *str , char *z)
{
	char	*c;
	char	*b;
	int	i;

	c = get_key(str);	
	i = ft_strlen(c);
	while (str[i] < 33)
		i++;
	if (str[i] == ':')
		i++;
	while (str[i] < 33)
		i++;

	b = ft_strdup(&str[i]);	
	if (!b)
		return (0);
	if (ft_strcmp(z, c) == 0)
	{
		free(c);
		return (b);
	}
	free(c);
	return (0);
}

char	*ft_dict(char **a_s , char *z)
{
	char	*out;

	while (*a_s)
	{
		out = ft_search(*a_s, z);
		if (out)
			return (out);
		a_s++;
	}
	return (0);
}
