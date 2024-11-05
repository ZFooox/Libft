/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:28:52 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 18:08:27 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//permet d'afficher une chaîne de caractère suivie
//d'un retour à la ligne avec un descripteur de fichier spé
void	ft_putendl_fd(char *str, int fd)
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
	write (fd, "\n", 1);
}

/* int	main(void)
{
	char	str[] = "Hello World!";
	int	fd = 1;

	ft_putendl_fd(str, 1);
	return (0);
}  */