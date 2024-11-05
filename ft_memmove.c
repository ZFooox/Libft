/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:47:22 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 11:10:41 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//permet de copier le contenu de src dans dest
//avec possibilité de chevauchement (sans écraser dest)
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (dest);
}

/* #include <stdio.h>

int main(void)
{
	//test1 copie classique
    char src[] = "Hello, World!";
    char dest[20];

    printf("Test 1 - Avant ft_memmove:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    ft_memmove(dest, src, sizeof(src));

    printf("Test 1 - Après ft_memmove:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

	//test2 copie avec chevauchement
	char str[] = "abcdef";

	ft_memmove(str + 2, str, 4);
	printf ("Test 2 - résultat attendu ababcd\n");
	printf("Test 2 - résultat obtenu: %s\n", str);

	return (0);
} */