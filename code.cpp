#include <iostream>
#include <vector>

using namespace std;

vector<char> reverseWords( const vector<char>& arr ) 
{
  vector<char> data;
  auto last = arr.end();
  for (auto ptr = arr.end(); ptr != arr.begin(); ptr--) {
      if (*ptr == ' '){
        auto newptr = ptr;              
        for (newptr; newptr != last; newptr++){
                data.push_back(*newptr);
             }
        last = ptr + 1;
      }
           
    }
    for (auto newptr= arr.begin(); newptr != last; newptr++){
                 data.push_back(*newptr);
             }
    return data;
}

int main() {
  char inp[] = {'p', 'e', 'r', 'f', 'e', 'c', 't', ' ', 'm', 'a', 'k', 'e', 's', ' ','p', 'r', 'a', 'c', 't', 'i', 'c', 'e'};
  int n = sizeof(inp) / sizeof(inp[0]); 
  vector<char> arr(inp, inp + n); 
  vector<char> out = reverseWords(arr);
  char outp[100];
  for (auto dataptr = out.begin(); dataptr != out.end(); dataptr++){
           cout<< *dataptr;
         }
  
  return 0;
}