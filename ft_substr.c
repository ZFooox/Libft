/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:02:51 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 18:16:49 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//pour extraire une sous chaîne d'une chaîne de caractère
char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	len_str;

	if (!str)
		return (NULL);
	len_str = ft_strlen(str);
	if (start >= len_str)
		return (ft_strdup(""));
	if (len >= len_str - start)
		len = len_str - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
#include <stdio.h>
int main(void)
{
    char *str = "Hello, world!";
    char *substr;

    // sous-chaîne au début str (renvoie : "Hello")
    substr = ft_substr(str, 0, -5);
    printf("Test 1: %s\n", substr);

    // sous-chaîne au milieu str (renvoie : "world")
    substr = ft_substr(str, 7, 5);
    printf("Test 2: %s\n", substr);

    // sous-chaîne à la fin de str (renvoie : "world!")
    substr = ft_substr(str, 7, 20);
    printf("Test 3: %s\n", substr);

    // start hors de str (renvoie : "")
    substr = ft_substr(str, 20, 5);
    printf("Test 4: %s\n", substr);

    // str est NULL (renvoie : NULL)
    substr = ft_substr(NULL, 0, 5);
    printf("Test 5: %s\n", substr);

    return (0);
}
*/