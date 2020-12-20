def main():
    input = [1, 2, 3, 4, 5]
    required_sum = 5
    input.sort()

    for i in range((int)((len(input))/2)):
        left = 0
        right = len(input)-1
        b = required_sum - input[i]
        while(left <= right):
            mid = (int)((left + right)/2)
            if(input[mid] == b):
                print("(" + str(input[i]) + "," + str(b) + ")")
                break
            elif(input[mid] < b):
                left = mid + 1
            else:
                right = mid - 1


if __name__ == "__main__":
    main()
