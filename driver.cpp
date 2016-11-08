#include <iostream>
#include "Maze.h"

using namespace std;
int main()
{
   Maze blah;
   int row, col;
   char blank;
   blah.createBoard("board.txt");
   blah.display();
   cout << "Please enter your starting position, zero indexed(r,c): ";
   cin >> row >> blank >>col;
   cout << "It is " << boolalpha << blah.isPath(row,col) <<
   " that you can reach the exit" << endl;
   return 0;
}
