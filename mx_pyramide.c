void mx_printchar(char c);
void mx_a1(int n);
void mx_a2(int n);
void mx_a3(int n);

void mx_a1(int n){
    char pyramid[n][n * 2];
    for (int i = 0; i < n; i++) {
  for (int j = 0; j < n * 2; j++) {
      pyramid[i][j] = ' ';
      }
    }
    int i = n - 1;
    for (int j = 1; j <= 2 * n - 3; j++)
        pyramid[i][j] = '-';
    for (int j = 0; j < n; j++) {
    pyramid[i][j] = '/';
        i--;
    }
}
void mx_a2(int n){
   char pyramid[n][n * 2];
    int i = n - 1;
    for (int j = n * 2 - 2; j > n - 1; j--) {
   pyramid[i][j] = '\\';
        i--;
    }
   int  j = n * 2 - 1;
    for (int i = n - 1; i > n / 2 - 1; i--)
  pyramid[i][j] = '|';
  }
  
void mx_a3(int n){
char pyramid[n][n * 2];
    int i = n - n / 2 - 1;
    for (int j = n * 2 - 2; j > n - 1; j -= 2) {
  pyramid[i][j] = '\\';
        i--;
    }
    int k = n;
    
    for (int i = 0; i < n; i++) {
  for (int j = 0; j < n * 2; j++) {
      if (j < k + 1)
    mx_printchar(pyramid[i][j]);
            else if (j > k && i > n / 2)
    mx_printchar(pyramid[i][j]);
  }
        mx_printchar('\n');
        k += 2;
    }
}  
void mx_pyramid(int n) {
    
    if (n < 2 || n % 2 != 0) {
        return;
    }
    mx_a1(n);
    mx_a2(n);
    mx_a3(n);
}