def main():
    arr = [5,3,3,3,1]
    arr_maj = dict()
    for i in range(len(arr)):
        if(arr[i] in arr_maj):
            arr_maj[arr[i]] = arr_maj[arr[i]] + 1
        else:
            arr_maj[arr[i]] = 1
    for key,value in arr_maj.items():
        if(value > len(arr)/2):
            print(key)



if __name__ == "__main__":
    main()