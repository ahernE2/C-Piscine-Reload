/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:41:46 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/08 16:46:43 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) (Value * ((Value < 0) * (-1) + (Value > 0)))

#endif
/*int main() {
    int a = -5;
    int b = 3;
    int c = 0;
    int d = -100;

    printf("ABS(%d) = %d\n", a, ABS(a)); // ABS(-5) = 5
    printf("ABS(%d) = %d\n", b, ABS(b)); // ABS(3) = 3
    printf("ABS(%d) = %d\n", c, ABS(c)); // ABS(0) = 0
    printf("ABS(%d) = %d\n", d, ABS(d)); // ABS(-100) = 100

    return 0;
}*/
