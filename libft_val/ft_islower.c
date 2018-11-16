/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_islower.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vasalome <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/23 17:08:26 by vasalome     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/01 15:07:59 by vasalome    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
