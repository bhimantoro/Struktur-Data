#include <stdio.h>
#include <math.h>
#include <conio.h>

struct polar
{
	double r;
	double alpha;
};

struct kartesian
{
	double x;
	double y;
};

main()
{
	struct polar pl;
	struct kartesian kl;

	printf("Masukkan nilai r untuk koordinat polar : ");
	scanf("%lf",&pl.r);

	printf("Masukkan alpha untuk koordinat polar : ");
	scanf("%lf",&pl.alpha);

	kl.x = pl.r*cos(pl.alpha);
	kl.y = pl.r*sin(pl.alpha);

	printf("Nilai koordinat kartesian untuk koordinat polar r= %2.2lf alpha=%2.2lf adalah: \n", pl.r,pl.alpha);
	printf("x=%2.2lf y=%2.2lf\n", kl.x,kl.y);
	getch();
}
