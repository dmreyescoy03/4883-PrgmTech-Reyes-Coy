'''
Name: David Reyes-coy
Date: 11/19/2022
Assignment: Nessy 11044
Description: given a NxN grid using a sonar you have must put
X on the grid, and that X controls its own cell/contiguous cells.
'''
t = int(input())

while t:
  m, n = list(map(int, input().split()))
  
  
  n = int(n)
  m = int(m)
  
  mm = m % 3
  nn = n % 3
  
  
  print(int(((n-nn) * (m-mm))/9))
  t -= 1