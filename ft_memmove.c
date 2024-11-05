/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:47:22 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 15:57:10 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//permet de copier le contenu de src dans dest
//avec possibilité de chevauchement (sans écraser dest)
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;

	if (!dest && !src && len > 0)
		return (NULL);
	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	i = -1;
	if (tmp_dest < tmp_src)
	{
		while (++i < len)
			tmp_dest[i] = tmp_src[i];
	}
	else
	{
		while (len > 0)
		{
			len--;
			tmp_dest[len] = tmp_src[len];
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