/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:16:36 by jocroon           #+#    #+#             */
/*   Updated: 2024/10/28 12:40:49 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len_big)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *) big);
	while (big[i] && i < len_big)
	{
		j = 0;
		while (little[j] && (i + j) < len_big && big[i + j] == little[j])
		{
			if (!little[j + 1])
				return ((char *) &big[i]);
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