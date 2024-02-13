Algorithm:
Now, we will apply the binary search algorithm in the given array:

Step 1: Divide the search space into 2 halves:
In order to divide the search space, we need to find the middle point of it. So, we will take a ‘mid’ pointer and do the following:
mid = (low+high) // 2 ( ‘//’ refers to integer division)
Step 2: Compare the middle element with the target:
In this step, we can observe 3 different cases:
If arr[mid] == target: We have found the target. From this step, we can return the index of the target possibly.
If target > arr[mid]: This case signifies our target is located on the right half of the array. So, the next search space will be the right half.
If target < arr[mid]: This case signifies our target is located on the left half of the array. So, the next search space will be the left half.
Step 3: Trim down the search space:
Based on the probable location of the target we will trim down the search space.
If the target occurs on the left, we should set the high pointer to mid-1. Thus the left half will be the next search space.
Similarly, if the target occurs on the right, we should set the low pointer to mid+1. Thus the right half will be the next search space.