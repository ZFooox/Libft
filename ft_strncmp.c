/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:22:16 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/02 12:11:08 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//pour comparer deux chaîne en spécifiant une taille
int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && str1[i] && str1[i] == str2[i])
		i++;
	if (i == len)
		return (0);
	return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "";
	char	s2[] = "a";
	size_t	n = 2;
	
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
*/