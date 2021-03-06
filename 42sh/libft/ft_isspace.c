/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 15:20:02 by mafernan          #+#    #+#             */
/*   Updated: 2017/06/13 15:22:34 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** Checks if it has a space
*/

int		ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || (c <= '\r' && c >= '\n'));
}
