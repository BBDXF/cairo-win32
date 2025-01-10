#include <stdio.h>
#include <cairo.h>
#define PROJECT_NAME "demo1"

int main(int argc, char **argv) {
    // 创建一个Cairo图像表面，格式为ARGB32，宽度和高度为200像素
    cairo_surface_t *surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, 200, 200);
    // 创建一个Cairo绘图上下文，关联到上面创建的表面
    cairo_t *cr = cairo_create(surface);

    // 设置绘图颜色为红色（这里采用RGB分量的形式来设置颜色）
    cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
    // 绘制一个矩形，左上角坐标为(20, 20)，宽度和高度都为160像素
    cairo_rectangle(cr, 20, 20, 160, 160);
    // 填充绘制的矩形区域
    cairo_fill(cr);

    // 将绘制好的图像表面保存为PNG文件
    cairo_surface_write_to_png(surface, "output.png");

    // 释放资源，先销毁绘图上下文
    cairo_destroy(cr);
    // 再销毁图像表面
    cairo_surface_destroy(surface);

    printf("This is project %s.\n", PROJECT_NAME);
    return 0;
}
