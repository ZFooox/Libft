/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:03:33 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 12:21:43 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//compare la ce qui est stocké dans la mémoire de str1
//avec ce qui est en mémoire de str2
int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	size_t			i;
	unsigned char	*tmp_str1;
	unsigned char	*tmp_str2;

	i = 0;
	tmp_str1 = (unsigned char *) str1;
	tmp_str2 = (unsigned char *) str2;
	while (i < len)
	{
		if (tmp_str1[i] != tmp_str2[i])
			return (tmp_str1[i] - tmp_str2[i]);
		i++;
	}
	return (0);
}
