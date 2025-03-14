def my_function(a1, a2):
    return a1 * a2

#Main section / global section {__main__}
length = int(input('Enter length of the rectangle: '))
breadth = int(input('Enter breadth of the rectangle: '))
area = my_function(length,breadth)
print(f'Area of the rectangle = {area} sqr units')
