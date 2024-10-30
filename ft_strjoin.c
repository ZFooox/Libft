/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:55:31 by jocroon           #+#    #+#             */
/*   Updated: 2024/10/30 12:35:05 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_tot_len(const char *str1, const char *str2)
{
	int	tot_len;

	tot_len = (ft_strlen(str1) + ft_strlen(str2) + 1);
	return (tot_len);
}

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		len;
	int		i;
	int		j;
	char	*result;

	len = get_tot_len(str1, str2);
	result = (char *)malloc(len * sizeof(char));
	if (!result)
		return (NULL);
	j = 0;
	i = 0;
	while (str1[i])
		result[j++] = str1[i++];
	i = 0;
	while (str2[i])
		result[j++] = str2[i++];
	result[j] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "test";
	char 	str2[] = "campus 19";
	
	printf("Avant ft_strjoin: %s, %s\n", str1, str2);
	printf("Après ft_strjoin: %s\n", ft_strjoin(str1, str2));
	return (0);
}
*/