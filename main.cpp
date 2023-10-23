#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int main(int argc, char **argv) {
  if (argc > 1) {
    size_t argv_size = strlen(argv[1]) - 1;
    int total = 0;
    for (size_t c=0;c<=argv_size;c++) {
      total = total + pow(2, argv_size - c) * (argv[1][c] - '0');
    }
    cout << "Binário: " << argv[1] << "\nDecimal: " << total << '\n';
  } else {
    cout << "Uso: bin2dec [OPTIONS]\n";
  }
  return 0;
}
