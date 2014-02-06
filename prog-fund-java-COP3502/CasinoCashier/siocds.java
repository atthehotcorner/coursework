public class siocds
{

    public siocds()
    {
        int array[] = {2,4,56,345,545,43,56,456,43};
    }

public int countIntsRecursive(int array[], int value) {
    return countIntsRecursive(array, value, 0, 0);
}

public int countIntsRecursive(int array[], int value, int counter, int i) {
    if (i+1 > array.length) {
        return counter;
    }
    else if (array[i] == value) {
        return countIntsRecursive(array, value, counter+1, i+1);
    }
    else {
        return countIntsRecursive(array, value, counter, i+1);
    }
}
}
