def reverse_words(arr):
  pass # your code goes here
  lenarr = len(arr)
  print(lenarr)
  i = lenarr -1
  newarr=[]
  while i > 0:
    if (arr[i] == ' '):
         newarr.extend(arr[i+1:lenarr])
         newarr.extend(' ')
         print (arr[i:lenarr]) 
         lenarr = i
    i-=1
  newarr.extend(arr[0:lenarr])
  print(newarr)


arr = [ 'p', 'e', 'r', 'f', 'e', 'c', 't', ' ','m', 'a', 'k', 'e', 's', ' ','p', 'r', 'a', 'c', 't', 'i', 'c', 'e' ]
reverse_words(arr)