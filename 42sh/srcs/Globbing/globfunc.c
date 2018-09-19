/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globfunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 17:06:35 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/26 10:10:21 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_shell.h"

int		globfunction(const char *name, char *str)
{
	if (isglob(str) == 0)
		return (0);
	if (isglob(str) == 1)
		if (starglob(name, str) == 1)
			return (1);
	if (isglob(str) == 2)
		if (quesglob(name, str) == 1)
			return (1);
	if (isglob(str) == 3)
		if (bracglob(name, str) == 1)
			return (1);
	if (isglob(str) == 4)
		if (curlyglob(name, str) == 1)
			return (1);
	return (0);
}
