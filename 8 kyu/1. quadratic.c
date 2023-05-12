//Quadratic Coefficients Solver
//https://www.codewars.com/kata/5d59576768ba810001f1f8d6

void quadratic(int x1, int x2, int coefficients[3]) {
  //(x - x1) * (x - x2)
  //x ^ 2 - x2x - x1x + x1x2
  //1x^2 - (x1 + x2)x + x1x2
  coefficients[0] = 1;
  coefficients[1] = -(x1 + x2);
  coefficients[2] = x1 * x2;
}