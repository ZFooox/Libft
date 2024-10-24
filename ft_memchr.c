/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:47:51 by jocroon           #+#    #+#             */
/*   Updated: 2024/10/24 13:02:40 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	oc;

	i = 0;
	s = (unsigned char *) str;
	oc = (unsigned char) c;
	while (i < len)
	{
		if (s[i] == oc)
			return ((void *) &s[i]);
		i++;
	}
	return (NULL);
}
