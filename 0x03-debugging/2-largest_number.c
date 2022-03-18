<<<<<<< HEAD
nclude "main.h"
=======
#include "main.h"
>>>>>>> 3d826f893bce17639968792d6ef67c3e29ef1fda

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
<<<<<<< HEAD
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
=======
        int largest;

        if (a >= b && a >= c)
        {
                largest = a ;
        }
        else if (b >= a && b >= c)
        {
                largest = b;
        }
        else
        {
                largest = c;
        }

        return (largest);
>>>>>>> 3d826f893bce17639968792d6ef67c3e29ef1fda
}
