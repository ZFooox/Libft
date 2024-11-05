/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:10:41 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 17:57:52 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//permet d'appliquer une autre fonction sur chaque caractères
//d'une chaîne sans en créer de nouvelle
void	ft_striteri(char *str, void (*fct)(unsigned int, char*))
{
	size_t	i;

	if (!str || !fct)
		return ;
	i = 0;
	while (str[i])
	{
		fct(i, &str[i]);
		i++;
	}
}

/* #include <stdio.h>

void	to_upper(unsigned int i, char *c)
{
    (void)i; // On ignore l'indice si on n'en a pas besoin ici
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}
int	main(void)
{
	char str[] = "hello, world!";
	ft_striteri(str, to_upper);
	printf("%s\n", str); // Affiche "HELLO, WORLD!"
} */