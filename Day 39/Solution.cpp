#include <iostream>
#include <algorithm>
using namespace std;
bool CheckAnagrams(string str1, string str2)
{
  
  if (str1.length() != str2.length())
    return false;
 
  int freq[26] = {0};
  for (int i = 0; i < str1.length(); i++)
  {
    freq[str1[i] - 'A']++;
  }
  for (int i = 0; i < str2.length(); i++)
  {
    freq[str2[i] - 'A']--;
  }
  for (int i = 0; i < 26; i++)
  {
    if (freq[i] != 0)
      return false;
  }
  return true;
}
int main()
{
  string Str1 = "KAVYAAAAA";
  string Str2 = "AAAAAYVAK";
  if(CheckAnagrams(Str1, Str2))
  cout << "True" << endl;
  else
  cout<<"False"<<endl;
  return 0;
}