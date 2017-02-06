#include "Test.h"

bool compare(int *a, int *b, int size)
{
    for(int i=0;i<size;i++)
        if(a[i]!=b[i])
            return false;
    return true;
}

void test()
{

    int arr1[] = { 100, 90, 70, 80, 85, 65, 40, -1, -1, -1, -1, -1, -1, -1, -1};

    removeTopFromHeap(arr1,7);
    int arr1_cmp[] = { 90, 85, 70, 80, 40, 65, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    bool check1_pass = compare(arr1, arr1_cmp, 6);

    removeTopFromHeap(arr1,6);
    int arr1b_cmp[] = { 85, 80, 70, 65, 40, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    bool check2_pass = compare(arr1, arr1b_cmp, 5);

    removeTopFromHeap(arr1,5);
    int arr1c_cmp[] = { 80, 65, 70, 40, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    bool check3_pass = compare(arr1, arr1c_cmp, 4);

    removeTopFromHeap(arr1,4);
    int arr1d_cmp[] = { 70, 65, 40, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    bool check4_pass = compare(arr1, arr1d_cmp, 3);

    removeTopFromHeap(arr1,3);
    int arr1e_cmp[] = { 65, 40, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    bool check5_pass = compare(arr1, arr1e_cmp, 2);

    removeTopFromHeap(arr1,2);
    int arr1f_cmp[] = { 40, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    bool check6_pass = compare(arr1, arr1f_cmp, 1);

    if(check1_pass
       && check2_pass
       && check3_pass
       && check4_pass
       && check5_pass
       && check6_pass
       )
    {
        cout<<"Test: Pass"<<endl;
    }else
    {
        cout<<"Test: Fail"<<endl;
    }

}
