#importing for performing array operations
import array 

#array initialization
arr = array.array('i',[1,2,3])
#here i means integer type array

print("The array is : ",end=" ")
for i in range(0,2):
    print(arr[i] ,end =' ')
print(arr[-1])


arr.append(4)