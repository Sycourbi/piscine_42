/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:32:52 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/29 18:18:10 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_conca(char *c, char *str)
{
	int	i;
	int	f;

	i = 0;
	f = ft_strlen(c);
	while (str[i])
	{
		c[f + i] = str[i];
		i++;
	}
	c[f + i] = '\0';
	return (c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*c;
	int		lenst;
	int		i;

	i = 0;
	while (i < size)
	{
		lenst = lenst + ft_strlen(strs[i]);
		i++;
	}
	lenst = lenst + (ft_strlen(sep) * (size -1));
	c = (char *) malloc(lenst * sizeof(char) + 1);
	if (!c)
		return (0);
	if (size == 0)
		return (c);
	i = 0;
	while (i < size)
	{
		ft_conca(c, strs[i]);
		if (i < size - 1)
			ft_conca(c, sep);
		i++;
	}
	return (c);
}

/*int	main(int argc, char **argv)
{
	printf("%s", ft_strjoin(argc, argv, "____"));
}*/
