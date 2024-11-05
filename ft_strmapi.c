/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:44:03 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 18:09:11 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//permet d'appliquer une autre fonction sur chaque caractères
//d'une chaine mais en créant une nouvelle chaîne 
//identique à l'originale
char	*ft_strmapi(char const *str, char (*fct)(unsigned int, char))
{
	char			*result;
	size_t			i;
	size_t			len;

	if (!str || !fct)
		return (NULL);
	len = ft_strlen(str);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = fct(i, str[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* #include <stdio.h>

char	increment_char(unsigned int index, char c)
{
	return (c + index);
}

int main(void)
{
	char *result = ft_strmapi("abc", increment_char);
	printf("Résultat : %s\n", result);
	return (0);
} */