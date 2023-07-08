/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 03:51:09 by iqabbal           #+#    #+#             */
/*   Updated: 2023/06/19 04:00:13 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*Incorrect memory deallocation: When you incorrectly 
manage dynamic memory allocation using functions like malloc, 
calloc, or realloc, and fail to release the memory with free, 
it can lead to memory leaks or invalid memory accesses. For example:
*/

int main()
{
    int* ptr = malloc(sizeof(int));
    *ptr = 10;
    printf("before free : %d\n",*ptr);
    free(ptr);
    *ptr = 12;
    printf("after free  : %d\n",*ptr);

}