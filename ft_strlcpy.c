/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:29:46 by jocroon           #+#    #+#             */
/*   Updated: 2024/10/21 14:59:54 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dest_size == 0)
		return (src_len);
	while (i < dest_size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[13] = "";
	char	src[] = "Hello, World!";
	size_t	size = 13;

	printf ("BEFORE dest :%s\n", dest);
	ft_strlcpy(dest, src, size);
	printf ("AFTER dest :%s\n", dest);
	printf ("strlcpy :%zu\n", ft_strlcpy(dest, src, size));
	return (0);
}
*/