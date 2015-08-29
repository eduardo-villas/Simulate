#include <iostream>
#include <fstream>

#include <string>
#include <list>
#include <set.h>
#include "builderset.h"

static bool readAllFiles(std::list<std::string> files,Set *s, std::string *error);
static void buildSet(const std::ifstream &curFile, Set *set);

int main()
{

   std::list<std::string> files {"teste1.txt", "teste2.txt"};

   Set s;
   std::string error;

   if (!readAllFiles(files, &s, &error)) {
      std::cout << error << std::endl;
      return 1;
   }

   return 0;
}

static bool readAllFiles(std::list<std::string> files,Set *s, std::string *error)
{

   for (std::string &fileName: files) {

      std::string fullFileName = "../SimulatedAnnealing/" + fileName;
      std::ifstream curFile;

      curFile.open(fullFileName, std::ifstream::in);

      if (!curFile.is_open()) {
         error->clear();
         error->assign("arquivo "+fullFileName+" nao existe");
         return false;
      }

      buildSet(curFile, s);

   }

   return true;
}

static void buildSet(const std::ifstream &curFile, Set *set)
{

   BuilderSet builder;

   std::string line;
   while (!curFile.eof()) {
      line.clear();
      curFile >> line;
   }

}
