#include <cstring>
#include <iostream>

// A -> T
// T -> A
// C -> G
// G -> C
void DNAStrand(char *dna) {
  for (int i = 0; i < strlen(dna); ++i) {
    if (dna[i] == 'A')
      dna[i] = 'T';
    else if (dna[i] == 'T')
      dna[i] = 'A';
    else if (dna[i] == 'C')
      dna[i] = 'G';
    else if (dna[i] == 'G')
      dna[i] = 'C';
  }

  std::cout << dna;
}

int main() {
  char dna1[] = "ATTGC";
  DNAStrand(dna1);

  return 0;
}
