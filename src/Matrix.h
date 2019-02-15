#ifndef MATRIX_H
#define MATRIX_H

typedef std::vector<int> line;

class Matrix {

public:

	// Constructor
    Matrix(int pLines, int pColumns);

	// Get number of lines
    int getLines();
	
	// Get size of a line
    int getColumns();
	
	// Get a certain entry of the matrix
    int getEntry(int pLine, int pColumn);
	
	// Set a certain entry of the matrix
    void setEntry(int pLine, int pColumn, int pEntry);
    
    // Get a certain column of the matrix
    Matrix* getColumn(int j);
    
    // Check if a given column is contained in the column matrix
    bool containsColumn(Matrix* column);
    
    // Get the norm of the matrix
    int getNorm();
    
    // Check if the column matrix is cosystolic
    bool isCosystole(int n, int k);

private:
    int lines;
    int columns;
    std::vector<line> matrix;
};

#endif
