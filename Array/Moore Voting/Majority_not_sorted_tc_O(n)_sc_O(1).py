def main():
    arr = [2, 2, 5, 6, 2, 2]
    voter = arr[0]
    votes = 0
    count = 0
    for i in range(len(arr)):
        if(arr[i] == voter):
            votes = votes + 1
        else:
            if(votes == 0):
                voter = arr[i]
            else:
                votes = votes - 1

    for i in range(len(arr)):
        if(arr[i] == voter):
            count = count + 1
    if(count > len(arr)/2):
        print(voter)


if __name__ == "__main__":
    main()
