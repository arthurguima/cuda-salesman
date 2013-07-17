//Ant algorithms for Travelling salesman Problem
#include <stdio.h>

//Ant algorithm problem parameters
#define CITIES 60
#define ANTS 30
#define MAX_DIST 100
#define MAX_TOTAL_DISTANCE (CITIES * MAX_DIST)

#define ALPHA 1.0
#define BETA 5.0 //This parameter raises the weight of distance over pheromone
#define RHO 0.5 //Evapouration rate
#define QVAL 100
#define MAX_TOURS 20
#define MAX_TIME (MAX_TOURS * CITIES)
#define INIT_PHER (1.0/CITIES)

//Initial Definiton of the problem
struct ant{
	
	int curCity, nextCity, pathIndex;
	int visited[CITIES];
	int path[CITIES];
	double tourLength;
};

double distances[CITIES][CITIES];
struct ant ants[ANTS];
double hormone[CITIES][CITIES];

double bestdistance = (double)MAX_TOTAL_DISTANCE;

//Methods

void get_distances_matrix(){
  int i= 0,j = 0;
  double k;

  while(scanf("%i %i %lf",&i,&j,&k) == 3){
    distances[i][j] = k;
    // printf("%lf \n",k);
  }
  printf("Got distance Matrix -- %i cities\n", CITIES);
}

void initialize_ants(){
   int i,k, init = 0;
   for( i = 0; i < ANTS; i++){
     if(init == CITIES)
      init == 0;
  
     for(k = 0; k < CITIES; k++){
       ants[i].visited[k] = 0;
       ants[i].path[k] = -1;
     } 

     ants[i].curCity = init++;
     ants[i].pathIndex = 1;
     ants[i].path[0] = ants[i].curCity;
     ants[i].nextCity = -1;
     ants[i].tourLength = 0;
   }
   printf("Ants Initialized - %i ants\n",ANTS);
}

int main()
{
  get_distances_matrix();

  initialize_ants();

	return 0;
}
