/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:16:06 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 13:20:27 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//permet d'allouer de la mémoire en mettant des 0
void	*ft_calloc(size_t alloc_len, size_t size)
{
	void	*ptr;

	ptr = malloc(alloc_len * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, alloc_len * size);
	return (ptr);
}

/* #include <stdio.h>

int	main(void)
{
	int		*arr;
	size_t	i;
	size_t	count;

	count = 5;
	arr = (int *)ft_calloc(count, sizeof(int));
	if (!arr)
	{
		printf("Allocation à échoué\n");
		return (1);
	}
	i = 0;
	while (i < 5)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	free(arr);
	return (0);
} */