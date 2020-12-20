def main():
    input = [1, 2, 3, 4, 5]
    hash = list()
    required_sum = 5
    for i in range(len(input)):
        for j in range(len(input)):
            sum = input[i] + input[j]
            if sum == required_sum:
                pair = (input[i], input[j])
                hash.append(pair)
    for i in range(len(hash)):
        print(hash[i])


if __name__ == "__main__":
    main()
