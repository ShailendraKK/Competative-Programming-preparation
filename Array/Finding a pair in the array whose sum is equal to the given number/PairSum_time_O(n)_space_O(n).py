def main():
    input = [1, 2, 3, 4, 5]
    hash_table = set()
    required_sum = 5
    # for i in range(len(input)):
    #     hash_table.add(input[i])
    for i in range(len(input)):
        b = required_sum - input[i]
        if b in hash_table:
            print("(" + str(input[i]) + "," + str(b) + ")")
        hash_table.add(input[i])


if __name__ == "__main__":
    main()
