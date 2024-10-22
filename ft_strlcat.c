/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:25:05 by jocroon           #+#    #+#             */
/*   Updated: 2024/10/22 12:26:03 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (dest_size <= dest_len)
		return (dest_size + src_len);
	while ((dest_len + i) < (dest_size - 1) && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
/*
#include <stdio.h>

int main(void)
{
	// Test 1: Concat normal
    char dest1[20] = "Hello, ";
    const char *src1 = "World!";
    size_t size1 = sizeof(dest1);
    size_t result1;

    printf("Test 1 - Avant ft_strlcat:\n");
    printf("Destination: %s\n", dest1);
    printf("Source: %s\n", src1);

    result1 = ft_strlcat(dest1, src1, size1);

    printf("Test 1 - Après ft_strlcat:\n");
    printf("Destination: %s\n", dest1);
    printf("Source: %s\n", src1);
    printf("Longueur totale: %zu\n", result1);

    // Test 2: Taille dest insuffisante
    char dest2[10] = "Hello, ";
    const char *src2 = "World!";
    size_t size2 = sizeof(dest2);
    size_t result2;

    printf("\nTest 2 - Avant ft_strlcat:\n");
    printf("Destination: %s\n", dest2);
    printf("Source: %s\n", src2);

    result2 = ft_strlcat(dest2, src2, size2);

    printf("Test 2 - Après ft_strlcat:\n");
    printf("Destination: %s\n", dest2);
    printf("Source: %s\n", src2);
    printf("Longueur totale: %zu\n", result2);

    // Test 3: Dest vide
    char dest3[20] = "";
    const char *src3 = "Hello, World!";
    size_t size3 = sizeof(dest3);
    size_t result3;

    printf("\nTest 3 - Avant ft_strlcat:\n");
    printf("Destination: %s\n", dest3);
    printf("Source: %s\n", src3);

    result3 = ft_strlcat(dest3, src3, size3);

    printf("Test 3 - Après ft_strlcat:\n");
    printf("Destination: %s\n", dest3);
    printf("Source: %s\n", src3);
    printf("Longueur totale: %zu\n", result3);

    // Test 4: Src vide
    char dest4[20] = "Hello, World!";
    const char *src4 = "";
    size_t size4 = sizeof(dest4);
    size_t result4;

    printf("\nTest 4 - Avant ft_strlcat:\n");
    printf("Destination: %s\n", dest4);
    printf("Source: %s\n", src4);

    result4 = ft_strlcat(dest4, src4, size4);

    printf("Test 4 - Après ft_strlcat:\n");
    printf("Destination: %s\n", dest4);
    printf("Source: %s\n", src4);
    printf("Longueur totale: %zu\n", result4);

    return 0;
}
*/