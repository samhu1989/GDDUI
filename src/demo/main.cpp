#include "util/app.hpp"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

//
// main is where all program execution starts
//
int main(int argc, char **argv)
{
  GDDUI_UTIL::App app;
  try {
    app.Run();
  } catch (const std::exception & e) {
    std::cerr<< e.what()  << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}