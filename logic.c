#include<stdio.h>
#include<math.h>

int main()
{
double x[100000],r,rbeg,rend,delr;
int n;

printf("enter the value of x0,n in logistic map");
scanf("%lf %d",&x[0],&n);

FILE *logic=fopen("logic.txt","w");

printf("enter the value of rbeg,rend,delr ");
 scanf("%lf %lf %lf",&rbeg,&rend,&delr);
r=rbeg;
while(r<=rend)
 {
  for(int i=0;i<n;i++)
   {
    x[i+1]=r*x[i]*(1.0-x[i]);
    fprintf(logic,"%lf\t%lf\t%lf\n",r,x[i],(double)i/n);  
   }
  r=r+delr;
 }

fclose(logic);
FILE *pipe = popen("gnuplot -persist","w");//persist is given so that even after c program ends gnuplot plots histogram
    fprintf(pipe, "set palette gray negative \n");
    fprintf(pipe, "set xlabel 'r' font 'bold,12' \n");
    fprintf(pipe, "set ylabel 'x[i]' font 'bold,12' rotate by 90  \n");	
    fprintf(pipe, "set title 'Logistics map' font 'ariel,20' textcolor rgbcolor 'blue' \n");		  
    fprintf(pipe, "plot 'logic.txt' with dots linetype palette\n");
pclose(pipe);
}
