def main():
    arr = [1,2,2,2,5]
    run = 1
    for i in range(len(arr)-1):
        if(arr[i]!=arr[i+1]):
            if(run>(len(arr)/2)):
                print(arr[i])
            run = 1

        else:
            run = run + 1



if __name__ == "__main__":
    main()