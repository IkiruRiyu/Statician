#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "statistics.h"


Statistician newStatistician();
void destroyStatistician(Statistician *s);
void add(Statistician s, int x);
void delete(Statistician s, int x);
void displayData(Statistician s);
Boolean isEmpty(Statistician s);

int minimum(Statistician s);
int maximum(Statistician s);
int range(Statistician s);
float mean(Statistician s);
float median(Statistician s);
DataStore mode(Statistician s);
float variance(Statistician s);
float standardDeviation(Statistician s);
