package main
import "fmt"
import "strings"

func ReverseWords(arr []string) []string {
    // your code goes here
  var revnewarr []string
  revnewarr = make([]string,len(arr))
  j:=0
   for i:=len(arr); i > 0; i -- {
    revnewarr[j]=arr[i-1]
     j++
    
  }
  
  return revnewarr
}

func main() {
 arr :=[] byte { 'p', 'e', 'r', 'f', 'e', 'c', 't', ' ','m', 'a', 'k', 'e', 's', ' ','p', 'r', 'a', 'c', 't', 'i', 'c', 'e' }
  var newarr []string
  arrstring := string(arr)
  as := strings.Split(arrstring, string(' '))
  
  newarr = ReverseWords(as)
  newjoin := strings.Join(newarr," ")
  b := []byte(newjoin)
 for i:=0 ; i < len(b); i ++ {
     fmt.Print(string(b[i])+",")
  }
 
}