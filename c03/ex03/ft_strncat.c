/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:40:23 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/24 12:05:34 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	o;

	i = 0;
	if (nb == 0)
		return (dest);
	while (dest[i] != '\0')
	{
		i++;
	}
	o = 0;
	while (src[o] != '\0' && o < nb)
	{
		dest[i + o] = src[o];
		o++;
	}
	dest[i + o] = '\0';
	return (dest);
}
/*int	main(void)
{
	char s1a[10] = "";
	char s2a[] = "OK";
	char s1b[10] = "";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[10] = "Size";
	char s3b[10] = "Same";
	char s4b[10] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";

	printf("%s:%s\n", ft_strncat(s1a, s2a, 5), strncat(s1b, s2b, 5));
	printf("%s:%s\n", ft_strncat(s3a, s4a, 10), strncat(s3b, s4b, 10));
	printf("%s:%s\n", ft_strncat(s5a, s6a, 0), strncat(s5b, s6b, 0));
}*/
