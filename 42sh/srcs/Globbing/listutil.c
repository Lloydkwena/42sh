/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listutil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 17:07:29 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/26 10:12:32 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_shell.h"

size_t	sizeoflist(t_list *list)
{
	size_t i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void	freelist(t_list **list)
{
	free(*list);
	*list = NULL;
}

void	printlist(t_list *list)
{
	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
}

char	**listtoarray(t_list **list)
{
	char	**name;
	size_t	i;
	t_list	*tmp;

	tmp = *list;
	i = 0;
	name = (char **)malloc(sizeof(char *) * sizeoflist(tmp));
	while (tmp)
	{
		name[i] = (char *)tmp->content;
		tmp = tmp->next;
		i++;
	}
	free(tmp);
	return (name);
}
