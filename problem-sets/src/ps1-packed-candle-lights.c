#include <sketch.h>
#include <math.h>

float find_x(float distance, float angle)
{
    angle = M_PI * angle / 180;
    return distance * cos(angle);
}

float find_y(float distance, float angle)
{
    angle = M_PI * angle / 180;
    return distance * sin(angle);
}

void small_circle(float x, float y, float r, float angle)
{
    float dx = find_x(r + r, angle);
    float dy = find_y(r + r, angle);
    float cx = x + dx;
    float cy = y + dy;

    draw_circle(cx - dx / 3, cy - dy / 3, r / 3);
    draw_circle(cx - dx / 6, cy - dy / 6, 2 * r / 3);
    draw_circle(cx, cy, r);
}

void packed_circles(float x, float y, float r)
{
    float r1 = r / 3;

    draw_circle(x, y, r);

    draw_circle(x, y, r1 / 3);
    draw_circle(x, y, 2 * r1 / 3);
    draw_circle(x, y, r1);

    small_circle(x, y, r1, 0);
    small_circle(x, y, r1, 60);
    small_circle(x, y, r1, 120);
    small_circle(x, y, r1, 180);
    small_circle(x, y, r1, 240);
    small_circle(x, y, r1, 300);
}

int main()
{

    packed_circles(0, 0, 150);

    set_stroke("#aaa");
    draw_line(0, -300, 0, 300);
    draw_line(-300, 0, 300, 0);

    save_sketch("output.svg");
}