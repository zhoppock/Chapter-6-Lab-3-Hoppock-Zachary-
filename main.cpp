// Hoppock, Zachary
// multiplicationTotal.cpp
// November 21, 2020
// Depending on the row and column amount, print out a table of integers that multiply together
// Version #1
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int rows;
  int columns;
  cout << "How many rows will the table have?" << endl;
  cin >> rows;
  cout << "How many columns will the table have?" << endl;
  cin >> columns;
  cout << endl;

  int product_table[rows][columns];
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
      {
        product_table[i][j] = (i+1) * (j+1);
      }
  }

  for (int i = 0; i <= columns; i++)
    if (i == 0)
      cout << " ";
    else
      cout << setw(6) << i;
  cout << endl;

  for (int i = 0; i < rows; i++)
  {
    cout << i + 1;
    for (int j = 0; j < columns; j++)
      {
        cout << setw(6) << product_table[i][j];
      }
    cout << endl;
  }
  return (0);
}