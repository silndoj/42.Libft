/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:30:37 by silndoj           #+#    #+#             */
/*   Updated: 2024/03/14 17:16:46 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	sublen;
	char	*ptr;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (slen <= start)
		return (ft_strdup(""));
	sublen = slen - start;
	if (sublen > len)
		sublen = len;
	ptr = (char *) ft_calloc((sublen + 1), sizeof(char));
	if (!ptr)
		return (0);
	ft_memcpy(ptr, (s + start), sublen);
	return (ptr);
}
//
//int main()
//{
//	char	*ptr = "Silvi Ndoj";
//	char	*res1;
//
//	res1 = ft_substr(ptr, 5, 4);	
//	printf("result ft_substr():%s\n", res1);
//}
