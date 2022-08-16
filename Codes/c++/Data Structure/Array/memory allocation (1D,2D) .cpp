    
    1D array memory allocation 
    ____________________________

    a[0] = 100 - (address)
    a[5] = ? 
    
    Formula : B + w (i-base)
    
    B : base address
    w : size/type(int,float)
    i : address to determine ; a[5] -> i=5
    base : given adrees index ; a[0] -> base=0
    
    
    ☞ a[5] = 100 + 4(5-0) = 120
    
    a[1] = 130, a[3] = ?
    
    ☞ a[3] = 130 + 4(3-1) = 138
    
    
    
    2D array memory allocation 
    ____________________________
    
    Formula : 
    
    row major ordering :
    
    A[i][j] = B + w[n(i-base)+(j-base)]
    
    column major ordering :
    
    A[i][j] = B + w[m(j-base)+(i-base)]
    
    n : per row elements 
    m : per column elements 
    
    
    int A[10][20]
    A[0][0] = (5CDF)16
    A[6][15] = ?  row major
    
    ☞ A[6][15] = (5CDF)16 + 4[20(6-0)+(15-0)
                = (5CDF)16 + 540
            
    
    