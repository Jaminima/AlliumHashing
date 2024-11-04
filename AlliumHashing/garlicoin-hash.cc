#include "Lyra2RE.h"
#include "scryptn.h"

static char* SumLyra2REv2(const char* input) {
  char* output = new char[32];
  lyra2re2_hash(input, output);
  return output;
}

static char* SumLyra2RE(const char* input) {
  char* output = new char[32];
  lyra2re_hash(input, output);
  return output;
}

static char* SumScryptN(const char* input) {
  char* output = new char[32];
  scrypt_N_R_1_256(input, output, 2048, 1, 80);
  return output;
}

static char* SumAllium(const char* input) {
  char* output = new char[32];
  allium_hash(input, output);
  return output;
}
