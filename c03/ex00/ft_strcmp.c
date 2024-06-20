/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:47:58 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/21 15:52:27 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main(void)
{
	char s1[] = "Test1";
	char s2[] = "OK";
	char s3[] = "Sime";
	char s4[] = "Saze";
	char s5[] = "Shorter";
	char s6[] = "ThanMyself";

	printf("%d, \n", ft_strcmp(s1, s2));
	printf("%d, \n", ft_strcmp(s3, s4));
	printf("%d, \n", ft_strcmp(s5, s6));
	printf("%d, \n", ft_strcmp(s5, s5));
	printf("%d, \n", strcmp(s1, s2));
	printf("%d, \n", strcmp(s3, s4));
	printf("%d, \n", strcmp(s5, s6));
}*/
