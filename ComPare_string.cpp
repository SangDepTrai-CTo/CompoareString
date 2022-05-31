#include <iostream>
#include <string>

using namespace std;

int cpm_string(string a, string b)
{
  int count = 0;
  for (int i = 0; i < a.length(); i++)
  {
    if (a[i] != b[i])
    {
      count++;
      cout << "The character at index " << i << " is different" << endl;
      cout << "The character at a have index " << i << " is " << a[i] << " when the charater at b is " << b[i] << endl;
    }
  }
  return count;
}

int main()
{
  string a = "d131dd02c5e6eec4693d9a0698aff95c2fcab58712467eab4004583eb8fb7f8955ad340609f4b30283e488832571415a085125e8f7cdc99fd91dbdf280373c5bd8823e3156348f5bae6dacd436c919c6dd53e2b487da03fd02396306d248cda0e99f33420f577ee8ce54b67080a80d1ec69821bcb6a8839396f9652b6ff72a70";
  string b = "d131dd02c5e6eec4693d9a0698aff95c2fcab50712467eab4004583eb8fb7f8955ad340609f4b30283e4888325f1415a085125e8f7cdc99fd91dbd7280373c5bd8823e3156348f5bae6dacd436c919c6dd53e23487da03fd02396306d248cda0e99f33420f577ee8ce54b67080280d1ec69821bcb6a8839396f965ab6ff72a70";
  cout << "the number of bits/bytes are the diffirent between two messages " << cpm_string(a, b) << endl;
  return 0;
}