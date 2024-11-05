/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:44:44 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 16:55:32 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//permet de retirer des caractères spécifiques
//uniquement au début et à la fin de str
char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;

	if (!str || !set)
		return (NULL);
	start = 0;
	while (str[start] && ft_strchr(set, str[start]))
		start++;
	end = ft_strlen(str);
	while (end > start && ft_strchr(set, str[end]))
		end--;
	return (ft_substr(str, start, end - start + 1));
}

/* #include <stdio.h>

int	main(void)
{
	char str[] = "   test   ";
	char set[] = " ";

	printf("Avant ft_strtrim: %s\n", str);
	printf("Après ft_strtrim: %s\n", ft_strtrim(str, set));
	return (0);
} */
