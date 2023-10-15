int ezThreeFourths(int x)
{
  int threex, bias, result;

  threex = x+x+x;
  bias = (threex>>31) & 3;
  result = (threex+bias) >> 2;
 
  return result;
}
