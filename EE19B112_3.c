#include <stdio.h>

void main()
{
    double x[100000]; //x is the array of data points
    double r, rbeg, rend, delr; //r is the constant parameter, rbeg is the initial value of r, rend is the final value of r, delr is the small change in r
    int n;  //n is number of data points

    FILE* logic = fopen("logic.txt", "w");

    printf("Enter the initial value of x (x0) for logistic map: ");
    scanf("%lf", &x[0]);
    printf("Enter number of data points for logistic map: ");
    scanf("%d", &n);
    printf("Enter the begining value of r: ");
    scanf("%lf", &rbeg);
    printf("Enter the ending value of r: ");
    scanf("%lf", &rend);
    printf("Enter the step size of r: ");
    scanf("%lf", &delr);

    r = rbeg;   //Initial value of r

    while (r <= rend)        //To generate data points
    {
        for (int i = 0; i < n; i++) 
        {
           x[i + 1] = r * x[i] * (1.0 - x[i]);
           fprintf(logic, "%lf\t%lf\t%lf\n", r, x[i], (double)i / n);
        }

      r = r + delr;
    }

    fclose(logic);

//To plot the graph in c using "gnuplot"
    FILE* pipe = popen("gnuplot -persist", "w"); //persist is given so that even after c program ends gnuplot plots histogram

    fprintf(pipe, "set terminal jpeg \n");
    fprintf(pipe, "set output 'logic.jpeg'\n");
    fprintf(pipe, "set palette gray negative \n");
    fprintf(pipe, "set xlabel 'r' font 'bold,12' \n");
    fprintf(pipe, "set ylabel 'x[i]' font 'bold,12' rotate by 90  \n");
    fprintf(pipe, "set title 'Logistics map' font 'ariel,20' textcolor rgbcolor 'blue' \n");
    fprintf(pipe, "plot 'logic.txt' with dots linetype palette\n");

    pclose(pipe);
}
