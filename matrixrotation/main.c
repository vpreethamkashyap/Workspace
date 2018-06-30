#include <stdio.h>
#include <stdlib.h>

static unsigned int matrix[3][3]= {
									{1,2,3},
									{4,5,6},
									{7,8,9}
								  };

/*
 * 1. Move elements of the top row
 * 2. Move elements of last column
 * 3. Move elements of bottom row
 * 4. Move elements of first column
 * */

void rotatematrix(int m , int n, unsigned int mat[][n])
{
	int i,j,row=0, col=0;
	int prev, curr;
	int R =m, C=n;

	/*
	   row - Staring row index
	   m - ending row index
	   col - starting column index
	   n - ending column index
	   i - iterator
	*/
	while((row < n) && (col < n))
	{
		if((row+1 == m) || (col + 1 == n))
			break;

		/*Store the first element of next row, this element will
		 * replace the first element of the current row
		 */

		prev = mat[row+1][col];

		/*Move elements of first row from the remaining row*/
		for(i = col; i<n; i++)
		{
			curr = mat[row][i];
			mat[row][i] = prev;
			prev = curr;
		}
		row++;

		/* Move elements of last column from remaining column*/
		for(i = row; i<m; i++)
		{
			curr = mat[i][n-1];
			mat[i][n-1] = prev;
			prev = curr;
		}
		n--;

		/* Move elements of last row from the remaining rows */
		if (row < m)
		{
		    for (i = n-1; i >= col; i--)
		    {
		       curr = mat[m-1][i];
		       mat[m-1][i] = prev;
		       prev = curr;
		    }
		}
	    m--;

	    /* Move elements of first column from the remaining rows */
	    if (col < n)
	    {
	       for (i = m-1; i >= row; i--)
	       {
	           curr = mat[i][col];
	           mat[i][col] = prev;
	           prev = curr;
	       }
	   }
	   col++;

	   // Print rotated matrix
	   for (i=0; i<R; i++)
	   {
	       for (j=0; j<C; j++)
	      {
	            printf("%d ", mat[i][j]);
	      }
	      printf("\n");
	   }
	}
}

int main (void)
{
	int i,j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", **(matrix+i)+j);
		}
		printf("\n");
	}

	//printf("%d", **(matrix+2)+2);

	rotatematrix(3,3,matrix);

	return 0;
}
