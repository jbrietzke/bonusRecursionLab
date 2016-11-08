#include <iostream>
#include <fstream>
#include "Maze.h"
using namespace std;

Maze::Maze()
{
   cout << "Constructor\n";
}

Maze::~Maze()
{
   cout << "Destructor\n";
}

void Maze::display()
{
   cout << "This is what the Board looks like\n";
   for (int i = 0; i < thisManyRows; ++i)
   {
      for (int t = 0; t < thisManyCols; ++t)
      {
         cout << mazeBoard[i][t] << " ";
      }
      cout << endl;
   }
}

void Maze::createBoard(string fileName)
{
   ifstream readFile(fileName);
   char symbol;
   for (int i = 0; i < thisManyRows; ++i)
   {
      for (int j = 0; j < thisManyCols; ++j)
      {
         readFile >> symbol;
         mazeBoard[i][j] = symbol;
      }
   }
}

bool Maze::isPath(int row, int col)
{
   bool result = false;
   if (mazeBoard[row][col] == 'E') return true;
   else if (mazeBoard[row][col] == '+' || mazeBoard[row][col] == 'M') return false;
   else mazeBoard[row][col] = 'M';
   if (row - 1 >= 0 && !result) result = isPath(row - 1, col);
   if (col + 1 < thisManyCols && !result ) result = isPath(row, col + 1);
   if (col - 1 >= 0 && !result) result = isPath(row, col - 1);
   if (row + 1 < thisManyRows && !result) result = isPath(row + 1, col);
   return result;
}
