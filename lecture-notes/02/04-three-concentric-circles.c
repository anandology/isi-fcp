#include <sketch.h>

int main()
{
    float r = 150;

    draw_circle(0, 0, r / 3);
    draw_circle(0, 0, 2 * r / 3);
    draw_circle(0, 0, r);

    save_sketch("lesson2.svg");
}
