#include<stdlib.h>
#include"graphics.h"
int main()
{
int gdriver,gmode,x,y,r,xc,yc;
float d;
printf("Enter center of circle\n");
scanf("%d%d",&xc,&yc);
printf("Enter the radius of circle\n");
scanf("%d",&r);
gdriver=VGA;
gmode=VGAMAX;
initgraph(&gdriver,&gmode,"");
x=0;
y=r;
d=3-2*r;
do
{

putpixel(x+xc,y+yc,20);
putpixel(y+yc,x+xc,20);
putpixel(y+yc,-x+xc,20);
putpixel(x+xc,-y+yc,20);
putpixel(-y+yc,-x+xc,20);
putpixel(-x+xc,-y+yc,20);
putpixel(-y+yc,x+xc,20);
putpixel(-x+xc,y+yc,20);


if(d<0)
{
d=d+4*x+6;
x=x+1;
y=y;
}
else
{
d=d+4*(x-y)+10;
x=x+1;
y=y-1;
}
}
while(x<y);
getch();
closegraph();
return(0);
}

