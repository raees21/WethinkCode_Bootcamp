/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raziz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 12:24:47 by raziz             #+#    #+#             */
/*   Updated: 2020/06/21 13:30:29 by raziz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int 	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char lastletter;

	lastletter = 'z';
	while(lastletter >= 'a')
	{
		ft_putchar(lastletter);
		lastletter--;
	}
	ft_putchar('\n');
}
