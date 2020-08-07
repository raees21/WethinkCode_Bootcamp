/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raziz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 11:21:44 by raziz             #+#    #+#             */
/*   Updated: 2020/06/21 13:29:42 by raziz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int 	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char fletter;

	fletter = 'a';
	while (fletter <= 'z')
	{
		ft_putchar(fletter);
		fletter++;
	}
	ft_putchar('\n');
}



