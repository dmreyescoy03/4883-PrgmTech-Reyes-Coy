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
| [main.cpp](https://github.com/dmreyescoy03/4883-PrgmTech-Reyes-Coy/blob/main/Assignments/P03/main.cpp) | Main Code |
| [in1](https://github.com/dmreyescoy03/4883-PrgmTech-Reyes-Coy/blob/main/Assignments/P03/input) | input Data |

# Data Structure:
### Stack / Array
>- This Problem used a Stack, and an Array.
> Storing the first train(A), to an Array, and the creating the second train(B).
> It traverses the array comparing the index value to the popped value from the stack.
> if they all match up then print "Yes" else "No". 


