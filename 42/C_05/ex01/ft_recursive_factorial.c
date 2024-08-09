/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:38:57 by mubal             #+#    #+#             */
/*   Updated: 2024/02/08 10:45:13 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
	{
        return (0);
    }
	else if (nb == 0 || nb == 1)
	{
        return (1);
    }
	else
	{
        return (nb * ft_recursive_factorial(nb - 1));
    }
}
