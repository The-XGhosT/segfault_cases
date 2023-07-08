/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 03:51:06 by iqabbal           #+#    #+#             */
/*   Updated: 2023/06/19 03:55:03 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

/*Buffer overflow: When you write data beyond the boundaries of an allocated memory buffer, 
you can overwrite other memory regions and cause a segfault. 
This commonly happens with arrays or character buffers. For example :*/

int main()
{
    char buffer[10];
    strcpy(buffer, "This is a longer string than the buffer can hold");
}