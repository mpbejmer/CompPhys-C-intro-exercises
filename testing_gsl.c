#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_rng.h>
#include <time.h>

#define ELEMENTS 1000000

int main(){

  double * rand_unif_array = (double*) malloc(sizeof(double)*ELEMENTS);
  double * rand_normal_array = (double*) malloc(sizeof(double)*ELEMENTS);

  const gsl_rng_type *T ; /* static info about rngs */
  gsl_rng *q ; /* rng instance */
  gsl_rng_env_setup(); /* setup the rngs */
  T = gsl_rng_default; /* specify default rng */
  q = gsl_rng_alloc(T); /* allocate default rng */
  gsl_rng_set(q, time(NULL)); /* Initialize rng */
  for(size_t ix=0; ix<ELEMENTS; ix++){
    rand_unif_array[ix] = gsl_rng_uniform(q); /* generate random number */
  }
  gsl_rng_free (q); /* deallocate rng */

  FILE *fp_unif;
  FILE *fp_norm;
  fp_unif = fopen("unif.txt", "w");
  fp_norm = fopen("normal.txt", "w");

  for(size_t ix=0; ix<ELEMENTS-1; ix++){
    fprintf(fp_unif,"%f,", rand_unif_array[ix]);
    fprintf(fp_norm,"%f,", rand_normal_array[ix]);
  }
  fprintf(fp_unif,"%f", rand_unif_array[ELEMENTS-1]);
  fprintf(fp_norm,"%f", rand_normal_array[ELEMENTS-1]);

  fclose(fp_unif);
  fclose(fp_norm);

  /* compile: gcc -o testing_gsl testing_gsl.c -lgsl -lgslcbals*/

}
