/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:39:40 by sasharma          #+#    #+#             */
/*   Updated: 2023/03/06 13:54:53 by sasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c < 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
