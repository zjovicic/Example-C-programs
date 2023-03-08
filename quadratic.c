#include <stdio.h>

float findmin (float array[], int members);
float findmax (float array[], int members);

int main() {

printf("DRAWING THE GRAPH OF FUNCTION Y = AX^2+BX+C\n");
float a;
printf("Enter a: ");
scanf("%f", &a);
float b;
printf("\nEnter b: ");
scanf("%f", &b);
float c;
printf("\nEnter c: ");
scanf("%f", &c);

int graph[41][41];
for (int i = 0; i < 41; i++)
{
    for (int j = 0; j < 41; j++)
    {
        graph[i][j] = 0;
    }
}

typedef struct function {
    float x;
    float y;
} quadratic;

quadratic qgraph[41];

int counter = 0;
float i = -2;
while (counter < 41)
{
     qgraph[counter].x = i;
     qgraph[counter].y = a * i * i + b * i + c;
     counter++;
     i = i + 0.1;
}

float ys[41];
for (int i = 0; i < 41; i++)
{
    ys[i]=qgraph[i].y;
}

float minimum = findmin(ys, 41);
float maximum = findmax(ys, 41);

float difference = maximum - minimum;
float step = difference / 40;


int counter_i = 0;
int counter_jot = 0;
float y_ofthegraph = maximum;
while (counter_i < 41)
{
    counter_jot = 0;
    while (counter_jot < 41)
    {
        if (qgraph[counter_jot].y > y_ofthegraph - (step / 2) && qgraph[counter_jot].y < y_ofthegraph + (step / 2))
        {
            graph[counter_i][counter_jot] = 1;
        }
        counter_jot++;
    }
    
    y_ofthegraph = y_ofthegraph - step;
    counter_i++;
}

printf("Max Y in the range X = -2 to X = 2: %f\n\n", maximum);
printf("*       -2                                        2\n");

for (int i = 0; i < 41; i++)
{
    printf ("*        ");
    for (int j = 0; j < 41; j++)
    {
        if (graph[i][j] == 0)
        {
            printf(" ");
        }
        else
        {
            printf("#");
        }
    }
    printf("\n");
}


printf("*       -2                                        2\n");
printf("Min Y in the range X = -2 to X = 2: %f\n", minimum);




    return 0;
}

float findmin (float array[], int members)
{
    float min = array[0];
    for (int i = 0; i < members; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

float findmax (float array[], int members)
{
    float max = array[0];
    for (int i = 0; i < members; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
