#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

typedef std::vector<int> line;

class Matrix {

public:
    Matrix(int pLines, int pColumns) :lines(pLines), columns(pColumns) {
		
		// Set size of the vector of lines
        matrix.resize(lines);
        
        // Set size of each line within the vector of lines
        for (int i = 0; i < lines; i++) {
            matrix[i].resize(columns);
        }
    }

	// Get number of lines
    int getLines() {
		return lines;
	}
	
	// Get size of a line
    int getColumns() {
		return columns;
	}
	
	// Get a certain entry of the matrix
    int getEntry(int pLine, int pColumn) {
		return matrix[pLine][pColumn];
	}
	
	// Set a certain entry of the matrix
    void setEntry(int pLine, int pColumn, int pEntry) {
		matrix[pLine][pColumn] = pEntry;
	}

private:
    int lines;
    int columns;
    std::vector<line> matrix;
};

#endif
