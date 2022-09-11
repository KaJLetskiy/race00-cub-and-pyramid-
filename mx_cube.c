void mx_printchar(char c);
void mx_a(int n);
void mx_c(int n);
void mx_d(int n);


void mx_a(int n) {
    for (int i = 0; i < n / 2 + 1; i++) {
        mx_printchar(' ');
    }
     mx_printchar('+');
    for (int i = 0; i < n * 2; i++) {
   mx_printchar('-');
    }
     mx_printchar('+');
     mx_printchar('\n');
    for (int i = n / 2; i > 0; i--) {
    for (int j = i; j > 0; j--) { 
       mx_printchar(' ');
    } 
     mx_printchar('/');
    for (int j = 0; j < n * 2; j++) {
   mx_printchar(' ');
    }
     mx_printchar('/');
    for (int a = n / 2 - i; a > 0; a--) {
        mx_printchar(' ');
    }
     mx_printchar('|');
     mx_printchar('\n');
    }
    mx_printchar('+');
}
void mx_c(int n) {
    int b = n / 2;
    for (int i = 0; i < n * 2; i++) {
        mx_printchar('-');
    }
     mx_printchar('+');
    for (int i = 0; i < n / 2; i++) {
   mx_printchar(' ');
    }
     mx_printchar('|');
     mx_printchar('\n');
    for (int i = 0; i < n / 2; i++) {
        mx_printchar('|');
    for (int j = 0; j < n * 2; j++) {
        mx_printchar(' ');}
        mx_printchar('|');
    for (b = 0; b < n / 2; b++) {
        mx_printchar(' ');}
   mx_printchar('|');
   mx_printchar('\n');}
     mx_printchar('|');} 
void mx_d(int n) {  
    for (int i = 0; i < n * 2; i++) {
   mx_printchar(' ');
    }
     mx_printchar('|');
    for (int i = 0; i < n / 2; i++) {
   mx_printchar(' ');}
     mx_printchar('+');
     mx_printchar('\n');
    for (int i = n / 2; i > 0; i--) {
   mx_printchar('|');
    for (int j = 0; j < n * 2; j++) { 
       mx_printchar(' ');} 
     mx_printchar('|');
    for (int j = i - 1; j > 0; j--) {
   mx_printchar(' ');}
     mx_printchar('/');
     mx_printchar('\n');}
     mx_printchar('+');    
    for (int i = 0; i < n * 2; i++) {
   mx_printchar('-');}
     mx_printchar('+');
     mx_printchar('\n');}

void mx_cube(int n) {
  
  if (n > 1) {       
 mx_a(n);
 mx_c(n);
 mx_d(n);
 }
 else 
  return; 
}