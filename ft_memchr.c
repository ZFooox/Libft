/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:47:51 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 12:39:27 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//recherche un caractère spécifique dans la zone mémoire str
void	*ft_memchr(const void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp_str;
	unsigned char	tmp_c;

	i = 0;
	tmp_str = (unsigned char *) str;
	tmp_c = (unsigned char) c;
	while (i < len)
	{
		if (tmp_str[i] == tmp_c)
			return ((void *) &tmp_str[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	char	str[50] = "Hello World!";
	int	c = 'W';
	char *result = ft_memchr(str, c, 13);

	if (result != NULL)
		printf("Caractère trouvé: %c\n", *result);
	else
		printf("Caractère introuvable\n");
	return (0);
} */
