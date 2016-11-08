#ifndef MAZE_H
#define MAZE_H
using namespace std;
class Maze
{
public:
   Maze();
   ~Maze();
   void display();
   void createBoard(string);
   bool isPath(int, int);
private:
   static const int thisManyRows = 4;
   static const int thisManyCols = 5;
   char mazeBoard[thisManyRows][thisManyCols];
};

#endif
