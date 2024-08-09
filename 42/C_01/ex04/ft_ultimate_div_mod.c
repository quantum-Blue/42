/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:54:03 by mubal             #+#    #+#             */
/*   Updated: 2024/02/07 13:47:00 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d1;
	int	d2;

	d1 = (*a / *b);
	d2 = (*a % *b);
	*a = d1;
	*b = d2;
}