/*Function Description

Complete the update function in the editor below.

update has the following parameters:

int *a: an integer
int *b: an integer
Returns

The function is declared with a void return type, so there is no value to return. Modify the values in memory so that  contains their sum and  contains their absoluted difference.


Input Format

Input will contain two integers,  and , separated by a newline.

Sample Input

4
5
Sample Output

9
1
*/

#include <stdio.h>
void update(int *a,int *b) {
 int pa;
 int pb;
  pa = *a + *b;
  pb = *a- *b;
  
  if(pb < 0){
    pb = (-1)*pb;
  }
  
  *a = pa;
  *b = pb;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
