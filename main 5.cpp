#include <iostream>
using namespace std;

bool backTracksearch(int grid[][9]);
int getFreeCellList(int grid[][9], int freeCellList[][2]);
bool isValid(int i, int j, int grid[][9]);
bool isValidCell(int grid[][9]);

int main()
{
  // Read a Sudoku puzzle
  int grid[9][9];
  cout << "Enter a Sudoku puzzle:" << endl;
  for (int i = 0; i < 9; i++)
  {
      for (int j = 0; j < 9; j++)
      {
         cin >> grid[i][j];
      }
  }
  backTracksearch(grid);

  //prints grid
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
      cout << grid[i][j] << " ";
    cout << endl;
  }
  return 0;
}

/** Obtain a list of free cells from the puzzle */
int getFreeCellList(int grid[][9], int freeCellList[][2])
{
  
}

/** Search for a solution */
bool backTracksearch(int grid[][9])
{
  
}

/** Check whether grid[i][j] is valid in the grid */
bool isValid(int i, int j, int grid[][9])
{
  // Check whether grid[i][j] is valid at the i's row
  
  // Check whether grid[i][j] is valid at the j's column
  

  // Check whether grid[i][j] is valid in the 3 by 3 box

}

/** Check whether the fixed cells are valid in the grid */
bool isValidCell(int grid[][9])
{
  // Check for duplicate numbers

  // Check whether numbers are in the range

  // The fixed cells are valid
}