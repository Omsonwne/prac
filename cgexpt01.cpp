#include<graphics.h>
#include<iostream>
using namespace std;
class pixel1
{
public:
void displayPixel(int x,int y)
{
putpixel(x,y,WHITE);
}

};
class Myline:public pixel1
{
public:
void drawline()
{
float x1,x2,y1,y2,dx,dy,length,x,y,i;
cout<<"\nEnter the co-ordinates :";
cin>>x1>>y1>>x2>>y2;
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
if(abs(x2-x1)>abs(y2-y1))
{
length=x2-x1;
}
else
length=y2-y1;
dx=(x2-x1)/length; 
dy=(y2-y1)/length;
x=x1+0.5;
y=y1+0.5;
i=1;
while(i<length)
{
displayPixel(x,y);
x=x+dx;
y=y+dy;
i++;
}
getch();
closegraph();
}
void drawline(int x1,int x2,int y1,int y2)
{

}
};
int main()
{
Myline li;
li.drawline();
}
/*
DDA Line Drawing Algorithm:
Line is a basic element in graphics. To draw a line, you need two end points between which you can
draw a line. Digital Differential Analyzer (DDA) line drawing algorithm is the simplest
line drawing algorithm in computer graphics. It works on incremental method. It plots the points
from starting point of line to end point of line by incrementing in X and Y direction in each
iteration.
DDA line drawing algorithm works as follows:
Step 1: Get coordinates of both the end points (X 1 , Y 1 ) and (X 2 , Y 2 ) from user.
Step 2: Calculate the difference between two end points in X and Y direction.

Step 3: Based on the calculated difference in step-2, you need to identify
the number of steps to put pixel. If dx &gt; dy, then you need more steps in x

coordinate; otherwise in y coordinate.
if (absolute(dx) &gt; absolute(dy))
Steps = absolute(dx);
else
Steps = absolute(dy);
Step 4: Calculate the increment in x coordinate and y coordinate.

Xincrement = dx / (float) steps;
Yincrement = dy / (float) steps;

Step 5: Plot the pixels by successfully incrementing x and y coordinates accordingly and complete
the drawing of the line.
for(int i=0; i &lt; Steps; i++)
{

X 1 = X 1 + Xincrement;
Y 1 = Y 1 + Yincrement;
putpixel(Round(X 1 ), Round(Y 1 ), ColorName);

}

Bresenham’s Circle Drawing Algorithm:
Circle is an eight-way symmetric figure. The shape of circle is the same in all quadrants. In each
quadrant, there are two octants. If the calculation of the point of one octant is done, then the other
seven points can be calculated easily by using the concept of eight-way symmetry.
Bresenham’s Circle Drawing Algorithm is a circle drawing algorithm that selects the nearest pixel
position to complete the arc. The unique part of this algorithm is that is uses only integer
arithmetic which makes it significantly faster than other algorithms using floating point arithmetic.

Step 1: Read the x and y coordinates of center: (centx, centy)
Step 2: Read the radius of circle: (r)
Step 3: Initialize, x = 0; y = r;
Step 4: Initialize decision parameter: p = 3 – (2 * r)
Step 5:
do {
putpixel(centx+x, centy-y, ColorName);
if (p&lt;0)
p = p+(4*x)+6;
else
{
p=p+[4*(x-y)]+10;
y=y-1;
}
x=x+1;
} while(x&lt;y)
Here in step 5, putpixel() function is used which will print Octant-1 of the circle with radius r after
the completion of all the iterations of do-while loop. Because of the eight-way symmetry property
of circle, we can draw other octants of the circle using following putpixel() functions:

Octant 1: putpixel(centx+x, centy-y, ColorName);
Octant 2: putpixel(centx+y, centy-x, ColorName);
Octant 3: putpixel(centx+y, centy+x, ColorName);
Octant 4: putpixel(centx+x, centy+y, ColorName);
Octant 5: putpixel(centx-x, centy+y, ColorName);
Octant 6: putpixel(centx-y, centy+x, ColorName);
Octant 7: putpixel(centx-y, centy-x, ColorName);
Octant 8: putpixel(centx-x, centy-y, ColorName);
Drawing Pattern using lines and circles:

This pattern is made up of one equilateral triangle and two concentric circles. To draw the triangle,
we require coordinates of 3 vertices forming an equilateral triangle. To draw two concentric circles,
we require coordinates of common center and radius of both the circles.
We will take coordinates of circle and radius of one of the circle from user. Then using the
properties of an equilateral triangle, we can find all 3 vertices of equilateral triangle and radius of
other circle. Once we get all these parameters, we can call DDA line drawing and Bresenham’s
circle drawing algorithms by passing appropriate parameters to get required pattern.*/
