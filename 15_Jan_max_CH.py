# Max_element in a data
#Method 1

data = [1, 2, 4, 67, 89]
print("Maximum data is", max(data))

#Method 2

max_num = data[0]
for value in data:
    if value > max_num:
        max_num = value
print("Using loop method - Maximum number is", max_num)

#Method 3

max_numb = data[0]
for i in range(len(data)):
    if data[i] > max_numb:
        max_numb = data[i]
print("Using another method - Maximum number is", max_numb)

#Method 4

data.sort()
print("Using sorting method - The last one would be the greatest", data)
