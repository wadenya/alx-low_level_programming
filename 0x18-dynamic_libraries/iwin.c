#include <unistd.h>
#include <string.h>

int rand()
{
	static int y = -1;

	y++;
	if (y == 0)
		return 8;
	if (y == 1)
		return 8;
	if (y == 2)
		return 7;
	if (y == 3)
		return 9;
	if (y == 4)
		return 23;
	if (y == 5)
		return 74;
	return y * y % 30000;
}
