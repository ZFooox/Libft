/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:55:31 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/08 12:28:03 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//pour combiner/concaténer deux tableaux
char	*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	int		j;
	char	*result;

	if (!str1 && !str2)
		return (NULL);
	if (!str1)
		return (ft_strdup((char *) str2));
	if (!str2)
		return (ft_strdup((char *) str1));
	result = (char *)malloc((ft_strlen(str1) + ft_strlen(str2) + 1)
			* sizeof(char));
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
