def find2num(arr, targetSum):
    hmap =  {}

    for i in range(len(arr)):
        toFind = targetSum - arr[i]
        if toFind in hmap:
            print("{} {}".format(arr[i], toFind))
        else:
          # variable_name[key] = value 
          hmap[ arr[i] ] = 1

'''
python me hash map / dictionary me insert 

variable [ key ] = value 

hmap.insert({key, value})

hmap = {}

map<int, int> hmap;
'''

if __name__ == "__main__":
    find2num([1, 2, 3, 5], 7)
