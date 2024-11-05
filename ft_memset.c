/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:00:28 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 12:28:34 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//rempli la zone mémoire b avec la valeur stocké dans int c
//sur une len donnée
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp_b;

	i = 0;
	tmp_b = (unsigned char *)b;
	while (i < len)
	{
		tmp_b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/* #include <stdio.h>

int	main(void)
{
	char str[50] = "Hello World!";
	int	c = '*';
	printf ("Avant ft_memset: %s\n", str);
	ft_memset(str, c, 5);
	printf ("Après ft_memset: %s\n", str);
	return (0);
} */
