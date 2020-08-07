/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raziz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:45:18 by raziz             #+#    #+#             */
/*   Updated: 2020/06/23 11:06:34 by raziz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if(power < 0 || power > 12)
	{
		return 0;
	}
	if(power == 0)
	{
		return 1;
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
