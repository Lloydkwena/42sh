/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:03:49 by mafernan          #+#    #+#             */
/*   Updated: 2017/10/01 13:45:50 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_shell.h"
#define BACKSPACE "\033[XD"

/*
 ** Handles ctrl-z signal.
*/

void	signal_sigkill(int sig)
{
	if (sig == SIGTSTP)
	{
		ft_putstr("\n");
		ft_print_dir();
		signal(SIGTSTP, signal_sigkill);
	}
}

/*
 ** Handles ctrl-z signal.
*/

void	signal_sigsegv(int sig)
{
	if (sig == SIGSEGV)
		exit(10);
}

/*
 ** Handles ctrl-c signal.
*/

void	signal_sigint_main(int sig)
{
	if (sig == SIGINT)
		signal(SIGINT, signal_sigint_main);
}

/*
 ** Handles ctrl-z signal.
*/

void	signal_sigkill_main(int sig)
{
	if (sig == SIGTSTP)
		signal(SIGTSTP, signal_sigkill_main);
}
