def main():
    arr = [1,2,2,2,5]
    for i in range((int)((len(arr)/2))):
        if(arr[i + (int)((len(arr)/2))] == arr[i]):
            print(arr[i])



if __name__ == "__main__":
    main()