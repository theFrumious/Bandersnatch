#include <graphics.h>
#include <arch/zx.h>

int main()
{
	zx_border(INK_BLACK);
	clg();
	plot(60,100);
	draw(0,50);

	return 0;
}

