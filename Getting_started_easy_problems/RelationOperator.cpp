#include<iostream>
using namespace std;

/*
 *11172 - Relational Operator 
 */
int main() {
  int n;
  scanf("%d", &n);
  while(n--) {
      int a,b;
      scanf("%d", &a);
      scanf("%d", &b);
      char c = a < b ? '<' : (a > b) ? '>' : '=';
      printf("%c\n", c);
  }  
  return 0;
}