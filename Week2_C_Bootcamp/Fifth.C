#include<stdio.h>

int main () {
    int width;
    int height;
    printf("Enter the width of the rectangle");
    scanf("%d", &width);
    printf("Enter the height of the rectangle");
    scanf("%d", &height);
    int area = width * height; 
    printf("Area = %d\n", area);
    return 0;
}