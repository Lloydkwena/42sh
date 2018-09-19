/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frontaddlink.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 11:16:54 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/23 17:03:24 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_shell.h"

t_list		*frontaddlink(t_list *list, char *str)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->content = str;
		tmp->next = list;
	}
	return (tmp);
}
