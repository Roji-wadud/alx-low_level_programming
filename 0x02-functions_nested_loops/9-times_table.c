#include "main.h"
/**
 * times_table - Print times_table
 */
void times_table(void)
{
	int mul, num, product;

	/*first loop*/
	for (mul = 0; mul <= 9; mul++)
	{
		for (num = 0; num <= 9; num++)
		{
			/* product of outer loop and inner loop */

			product = mul * num;

			/* Add comma and space */

			if (num != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
