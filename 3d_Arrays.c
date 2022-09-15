
#include <stdio.h>

int main()
{
    printf("Hello World:\n\n");
    double m[3][3] = {{3.0}};
    
    for (int i = 0; i < 3; i++)
    {
        printf("ELEMENTS ROW %d: ", i);
        for (int j = 0; j < 3; j++)
        {
            printf("[%d, %d] = %lf, ", i, j, m[i][j]);
        }
        printf("\n");
    }
    
    printf("\n1. 2D. POINTER: (%p, %p); VAlUE: %lf\n", &m[0][0], m[0], *(&m[0][0]));
    printf("\n2. 2D. POINTER: (%p, %p); VAlUE: (%lf, %lf)\n", &m[0][0], m[0], m[0][0], *(*(m + 0) + 0));
    //m[i][j] <==> *(*(m + i) + j)
    //m[i][j][k] <==> *(*(*(m+i)+j)+k)
    
    int a[5] = {3.0}; 
    printf("\n3. 1D. POINTER: (%p, %p); VAlUE: %d\n", a, &a[0], *(a + 0));
    
    int z[3][3][3] = { {{10,20,30},{40,50,60},{70,80,90}},
                          {{11,22,33},{44,55,66},{77,88,99}},
                          {{12,23,34},{45,56,67},{78,89,90}} };
    printf("\n4. 3D. VALUE: (%d, %d); VAlUE: (%d, %d)\n", z[0][0][0], *z[0][0], z[0][1][2], *(*(*(z+0)+1)+2));
    
    //EXTRA 3D:
    /* 
    first dimension represents the block size(total number of 2D arrays). 
    second dimension represents the rows of 2D arrays.
    third dimension represents the columns of 2D arrays.
    */
    int i, j, k;
    //array declaration
    int arr[3][3][3] = { { {10,20,30},{40,50,60},{70,80,90} },
                           { {11,22,33},{44,55,66},{77,88,99} },
                           { {12,23,34},{45,56,67},{78,89,90} } };
    /* OR {10,20,30,40,50,60,70,80,90,11,22,33,44,55,66,77,88,99,12,23,34,45,56,67,78,89,90}; */
	printf("printing the values in array: \n");
	for(i=0;i<3;i++) //BLOCK/PAGE
	{
	    printf("\nBLOCK: %d\n", i);
		for(j=0;j<3;j++) //ROW
		{
			for(k=0;k<3;k++) //COLUMN
			{
				printf("%d ",arr[i][j][k]);
				if(k==2)
				{
					printf("\n");
				}
			}
		}
		printf("\n");
	}
    
    return 0;
}
