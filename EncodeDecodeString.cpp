//problem link : https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

string encode(string s)
{     
  //Your code here 
  string str = "";
  int count = 1;
   char ch = s[0];
  for(int i = 1; i < s.size(); i++) {
      if(ch == s[i]) {
          count++;
      } else {
          str += s[i-1] + to_string(count);
          count = 1;
          ch = s[i];
      }
  }
  str += s[s.size() - 1] + to_string(count);
  return str;
}     
 
