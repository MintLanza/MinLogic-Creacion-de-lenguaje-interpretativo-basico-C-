#include <iostream>
#include "libLex.h"

using namespace std;

int main(){
  lex io;
  io.log(R"(
    val gfd fd
  )");
}