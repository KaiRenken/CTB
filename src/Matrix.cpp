#include <vector>
#include "Matrix.h"

Matrix::Matrix(int pLines, int pColumns)
{	
	lines = pLines;
	columns = pColumns;
		
    matrix.resize(lines);
    
    for (int i = 0; i < lines; i++)
    {
		matrix[i].resize(columns);
	}
}

int Matrix::getLines()
{
	return lines;
}
	
int Matrix::getColumns()
{
	return columns;
}
	
int Matrix::getEntry(int pLine, int pColumn)
{
	return matrix[pLine][pColumn];
}
	
void Matrix::setEntry(int pLine, int pColumn, int pEntry)
{
	matrix[pLine][pColumn] = pEntry;
}

Matrix* Matrix::getColumn(int j)
{
	Matrix* result = new Matrix(lines, 1);
	
	for (int i = 0; i < lines; i++)
	{
		result->setEntry(i, 0, matrix[i][j]);
	}
	
	return result;
}

bool Matrix::containsColumn(Matrix* column)
{
	int checker;
	
	for (int i = 0; i < column->getLines(); i++)
	{
		checker = 0;
		
		for (int l = 0; l < lines; l++)
		{
			if (matrix[l][0] == column->getEntry(i,0))
			{
				checker = 1;
			}
		}
		
		if (checker == 0)
		{
			return false;
		}
	}
	
	return true;
}

int Matrix::getNorm()
{
	int result = 0;
	
	for (int i = 0; i < lines; i++)
	{
		result = result + matrix[i][0];
	}
	
	return result;
}

bool Matrix::isCosystole(int n, int k)
{
	
}
