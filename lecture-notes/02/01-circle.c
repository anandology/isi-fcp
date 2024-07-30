#include <sketch.h>

int main()
{
    // draw a circle with center as (0, 0) and radius 100
    draw_circle(0, 0, 100);

    // save all the shapes draws to lesson2.svg
    save_sketch("lesson2.svg");
}
