#include <iostream>
#include "Maze.h"

using namespace std;
int main()
{
   Maze myMaze;
   int row, col;
   char blank, haveFile;
   string fileName;
   cout << "Do you have a Maze file to import?(y/n): ";
   cin >> haveFile;
   if (haveFile == 'y') cin >> fileName;
   else fileName = "board.txt";
   myMaze.createBoard(fileName);
   myMaze.display();
   cout << "Please enter your starting position, zero indexed(r,c): ";
   cin >> row >> blank >>col;
   cout << "It is " << boolalpha << myMaze.isPath(row,col) <<
   " that you can reach the exit" << endl;
   return 0;
}
