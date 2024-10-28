/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:16:06 by jocroon           #+#    #+#             */
/*   Updated: 2024/10/28 12:03:59 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t alloc_len, size_t size)
{
	void	*ptr;

	ptr = malloc(alloc_len * size);
	if (!ptr)
		return (NULL);
	bzero(ptr, alloc_len * size);
	return (ptr);
}
