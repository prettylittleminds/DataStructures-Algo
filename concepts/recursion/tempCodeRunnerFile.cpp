    cin >> n;

    cout << "\nHow many objects r do you wish to select? ";
    cin >> r;

    int result = nCr(n,r);
    cout << "\nThe number of ways thus are: " << result;

    return 0;
}

/*

Test Case 1:
Enter the total number of objects, n: 3

How many objects r do you wish to select? 2

The number of ways thus are: 3
