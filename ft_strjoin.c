/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:14:35 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/07 17:48:37 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s1);
	if ((res = (char *)malloc(sizeof(res) * len + 1)) == NULL)
		return (NULL);
	return (ft_strcat((char *)s1, s2));
}
