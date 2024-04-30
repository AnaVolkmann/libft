/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:08:43 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/04/30 14:32:21 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @brief aloca e retorna um novo noh
 @param content conteudo para criar um novo noh
 @return novo noh
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*lista;
	lista = malloc(sizeof(t_list));
	lista->content = "abc";
	lista->next = NULL;
	printf("%s\n", (char*)lista->content);
	lista = ft_lstnew(lista->content);
	printf("%s", (char *)lista->content);
} */