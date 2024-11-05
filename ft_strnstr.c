/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:16:36 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 18:07:45 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && (i + j) < len && haystack[i + j] == needle[j])
		{
			if (!needle[j + 1])
				return ((char *) &haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strnstr("19 Network is amazing", "Network", 15));
	// Attendu: "Network is amazing"
	printf("%s\n", ft_strnstr("19 Network is amazing", "amazing", 15));
	// Attendu: "(null)"
	printf("%s\n", ft_strnstr("19 Network is amazing", "not found", 15));
	// Attendu: "(null)"
	printf("%s\n", ft_strnstr("19 Network is amazing", "", 15));
	// Attendu: "19 Network is amazing"
	return (0);
}
*/