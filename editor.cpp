/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <assert.h>
#include <stdio.h>

// constraints
#define MAXN 1000000

// input data
int N, i, j, cont;



int main() {
  //  uncomment the following lines if you want to read/write from files
    freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);

  assert(1 == scanf("%d", &N));
  char V[N];
  for (i = 0; i < N; i++) assert(1 == scanf(" %c", &V[i]));

    cont = 0;

  for(int i = 0; i < N; i++) {
    if(V[i] == 'I' || V[i] == 'i') {
        cont ++;
        j = 0;
        while(V[i+j] == 'I' || V[i+j] == 'i') {
            if(V[i+j] == 'I'){
                V[i+j] = 'N';
            }
            else if(V[i+j] == 'i'){
                V[i+j] = 'n';
            }
            j++;
        }
    }
    if(V[i] == 'N') {
        cont ++;
        j = 0;
        while(V[i+j] == 'N' || V[i+j] == 'I'){
            if(V[i+j] == 'N'){
                V[i+j] = 'n';
            }
            else if(V[i+j] == 'I'){
                V[i+j] = 'i';
            }
            j++;
        }
    }
  }

  printf("%d\n", cont);  // change 42 with actual answer
  return 0;
}
