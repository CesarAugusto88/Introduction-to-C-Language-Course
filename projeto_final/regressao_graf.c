/* Cesar Augusto de Moraes Costa - PhD Student at INPE. C Language Course. Professor Lazaro. 01/03/2025
 * gcc regressao_graf.c -o regressao_graf -I/usr/local/dislin/include -L/usr/local/dislin/lib -ldislin -lm */

#include <stdio.h>
#include <math.h>
#include "dislin.h"

int main()
{
    float xpoints[10], ypoints[10];
    float sigmax = 0, sigmay = 0, sigmaxy = 0, sigmaxsquared = 0;
    float fltcnt, sxy, sxx, b, a;
    int i, points;
    FILE *ptrarq;

    // Opens the file for writing
    ptrarq = fopen("equation.txt", "w");
    if (ptrarq == NULL)
    {
        printf("Erro ao abrir o arquivo equation.txt!\n");
        return 1;
    }

    printf("Enter number of points (max 10): \n");
    scanf("%d", &points);

    if (points > 10)
    {
        printf("Error - max of 10 points\n");
        fclose(ptrarq); // closes the file
        return 1;
    }

    // User enters points
    for (i = 0; i < points; i++)
    {
        printf("Enter point (x and y separated by space): \n");
        scanf("%f %f", &xpoints[i], &ypoints[i]);
        sigmax += xpoints[i];
        sigmay += ypoints[i];
        sigmaxy += xpoints[i] * ypoints[i];
        sigmaxsquared += pow(xpoints[i], 2);
    }

    // Calculate regression coefficients
    fltcnt = (float)points;
    float xbar = sigmax / fltcnt;
    float ybar = sigmay / fltcnt;
    sxy = (1 / fltcnt) * sigmaxy - xbar * ybar;
    sxx = (1 / fltcnt) * sigmaxsquared - xbar * xbar;
    b = sxy / sxx;
    a = ybar - b * xbar;

    // Generate points for the regression line
    float regression_x[100], regression_y[100];
    float min_x = xpoints[0], max_x = xpoints[0];
    float min_y = ypoints[0], max_y = ypoints[0];
    for (i = 0; i < points; i++)
    {
        if (xpoints[i] < min_x) min_x = xpoints[i];
        if (xpoints[i] > max_x) max_x = xpoints[i];
        if (ypoints[i] < min_y) min_y = ypoints[i];
        if (ypoints[i] > max_y) max_y = ypoints[i];
    }
    for (i = 0; i < 100; i++)
    {
        regression_x[i] = min_x + (max_x - min_x) * i / 99.0;
        regression_y[i] = a + b * regression_x[i];
    }

    // Adjusts the bounds of the axes to ensure that all points are visible
    float x_margin = (max_x - min_x) * 0.1; // 10% de margem
    float y_margin = (max_y - min_y) * 0.1; // 10% de margem

    // Plotting with DISLIN
    metafl("cons");  // Output to console
    scrmod("revers"); // Reverse background color
    disini();        // Initialize DISLIN
    pagera();        // Draw a border around the page
    complx();        // Use a complex font
    axspos(250, 1300); // Set position of the axes
    axslen(2200, 1200); // Set length of the axes

    name("X-axis", "x"); // Label for X-axis
    name("Y-axis", "y"); // Label for Y-axis

    //labdig(-1, "x"); // Number of decimal places for X-axis
    //ticks(9, "x");   // Number of ticks on X-axis
    // Sets the formatting of the X-Axis labels
    labdig(2, "x"); // Shows 2 decimal places on the X-Axis
    labels("FLOAT", "x"); // Uses floating point formatting for the X-Axis
    ticks(10, "y");  // Number of ticks on Y-axis

    titlin("Linear Regression Plot", 1); // Title of the plot
    titlin("Data Points and Regression Line", 3); // Subtitle

    int ic = intrgb(0.95, 0.95, 0.95); // Light gray background
    axsbgd(ic); // Set background color

    // Set axis ranges with margins
    graf(min_x - x_margin, max_x + x_margin, min_x, (max_x - min_x) / 10,
         min_y - y_margin, max_y + y_margin, min_y, (max_y - min_y) / 10);

    setrgb(0.7, 0.7, 0.7); // Gray grid color
    grid(1, 1); // Draw grid

    color("fore"); // Set default color
    height(50);    // Set text height
    title();       // Draw title

    // Plot data points with filled circles
    color("blue");
    for (i = 0; i < points; i++)
    {
        // Draws a filled circle at the point (xpoints[i], ypoints[i])
        rlcirc(xpoints[i], ypoints[i], 0.05); // 0.5 is the radius of the circle
    }

    // Plot regression line
    color("red");
    curve(regression_x, regression_y, 100); // Draw the regression line

    disfin(); // Finish DISLIN
    
    /* Print the equation of the regression line */
    printf("Equation of regression line y on x  is\n ");
    printf(" y=%f + %fx", a, b);
    printf(" \n");

    // Writes equation to file
    fprintf(ptrarq, "y = %f + %fx\n", a, b);
    fclose(ptrarq);

    return 0;
}
