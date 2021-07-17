void rotate(char matrix[10][10]){
  char m1 [10][10];
  for (int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      m1[i][j] = matrix[i][j];
    }
  }

    for (int i=0;i<10;i++){
      for(int j=9,k=0;j>=0;j--,k++){
	matrix[i][k] = m1[j][i];
      }
    }
  
}
