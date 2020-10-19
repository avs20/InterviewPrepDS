
def getMaxNum(value):

    sepList = value.split()
    
    print(sepList)

    intArr = []

    for item in sepList:
        if item.isdigit():
            if not "9" in item:
                intArr.append(int(item))
    
    if (len(intArr) < 1):
        return -1

    return max(intArr)

print(getMaxNum("This i 4057 .I am 10876 , Can you get me 8765"))

print(getMaxNum("This is alpha 587 and 986"))


