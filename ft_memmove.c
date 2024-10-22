/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:47:22 by jocroon           #+#    #+#             */
/*   Updated: 2024/10/22 15:46:29 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*(--d) = *(--s);
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    // Test 1: Copie simple sans chevauchement (dest < src)
    char src1[] = "Hello, World!";
    char dest1[20];

    printf("Test 1 - Avant ft_memmove:\n");
    printf("Source: %s\n", src1);
    printf("Destination: %s\n", dest1);

    ft_memmove(dest1, src1, sizeof(src1));

    printf("Test 1 - Après ft_memmove:\n");
    printf("Source: %s\n", src1);
    printf("Destination: %s\n", dest1);

    // Test 2: Copie avec chevauchement potentiel (dest > src)
    char overlap[] = "Hello, World!";
    printf("\nTest 2 - Avant ft_memmove avec chevauchement:\n");
    printf("Source: %s\n", overlap);

    ft_memmove(overlap + 3, overlap, 7);

    printf("Test 2 - Après ft_memmove avec chevauchement:\n");
    printf("Source: %s\n", overlap);

    // Test 3: Copie avec n = 0
    char src3[] = "Hello, World!";
    char dest3[20] = "Initial value";

    printf("\nTest 3 - Avant ft_memmove avec n = 0:\n");
    printf("Source: %s\n", src3);
    printf("Destination: %s\n", dest3);

    ft_memmove(dest3, src3, 0);

    printf("Test 3 - Après ft_memmove avec n = 0:\n");
    printf("Source: %s\n", src3);
    printf("Destination: %s\n", dest3);
    
    return 0;
}
*/