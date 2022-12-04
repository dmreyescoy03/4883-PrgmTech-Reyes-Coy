# Program 3:
- Rails:
- PDF: [Rails](https://onlinejudge.org/external/5/514.pdf)

## Description:
- TrainA and TrainB. When trainA arrives at the station it has a specific order
 of coaches. ex(1,2,3,4,5), and when trainB departs from the station, it must follow
 that order. ex(5,4,3,2,1) in-order to result in a "Yes", if the order does not match.
 You will recieve a "No" as trainB departed in a different order. Store the trainA
 to an array, and push each index to a stack. Creating TrainB. push/pop the stack while
 Traversing the array matching the index to the top of the stack.

## Input:
> - The input file consists of blocks of lines. Each block except the last describes one train and possibly
 more requirements for its reorganization. In the first line of the block there is the integer N.
> - In each of the next lines of the block there is a permutation of 1, 2, . . . , N. 
> -The last block consists of just one line containing ‘0’. Meaning end of test case.
> ex: output
> - Yes
> - No
> - 
> - Yes

| Folder | Description |
| :----: | ----------- |
| [main.cpp]() | Main Code |
| [in1]() | input Data |

# Data Structure:
>- A part of c++ STL.
- A Map is used for this program. It takes a string (the tree name), and 
 an int (the percentage) and makes them a pair. Maps are always sorted
 by smallest element at the beginning to greatest element at the end.


