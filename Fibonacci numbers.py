n=int(input ("Enter the fibonacci series:"))
first=0
second=1
For i in range(n):
    print(first)
    temp=first
    first=second
    second=temp+second      

Output:
  0
  1
  1
  2
  3 
  5
  8
  13  

