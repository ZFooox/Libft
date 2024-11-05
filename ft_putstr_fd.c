/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:10:09 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 15:37:39 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//permet d'afficher un chaîne de caractère
//avec un descripteur de fichier spécifié
void	ft_putstr_fd(char *str, int fd)
{
	size_t	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		write (fd, &str[i], 1);
		i++;
	}
}

/* #include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World!";
	int	fd = 1;
	
	ft_putstr_fd(str, fd);
	return (0);
} */