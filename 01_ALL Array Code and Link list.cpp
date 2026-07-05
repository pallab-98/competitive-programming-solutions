#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    Student *next;
    Student(int r)
    {
        roll = r;
        next = nullptr;
    }
} Student *head = nullptr;
void insertAtbeginning(int roll)
{
    Student *newNode = new Student(roll);
    newNode->next = head;
    head = newNode;
}
void insertAtposition(int roll, int pos)
{
    Student *newNode = new Student(roll);
    Student *temp = head;
    for (int i = 1; i < pos && temp != nullptr; i++)
    {
        temp = temp->next;
    }
    if (temp = nullptr)
    {
        cout << "Invalid Position";
    }
    else
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void insertAtend(int roll)
{
    Student *newNode = new Student(roll);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Student *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void countElement()
{
    int count = 0;
    Student *temp = head;
    while (temp->next != nullptr)
    {
        count++;
        temp = temp->next;
    }
    cout << "Total elements" << count << endl;
}
void display()
{
    Student *temp = head;
    while (temp->next != nullptr)
    {
        cout << "Roll:" << temp->roll << endl;
        temp = temp->next;
    }
}
int main()
{
    insertAtBeginning(1);
    insertAtend(2);
    insertAtend(3);
    insertAtend(5);
    insertAtposition(4, 4);
}

// 01. Array Insertions:

#include <bits/stdc++.h>
using namespace std;
void update(int *ara, int len, int pos, int value);
void display(int *ara, int len);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int ara[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(ara) / sizeof(ara[0]);
    int pos = 5;
    pos -= 1;
    int value = 666;

    update(ara, len, pos, value);
    display(ara, len);

    return 0;
}
void update(int *ara, int len, int pos, int value)
{
    for (int i = len; i > pos; i--)
        *(ara + i) = *(ara + i - 1);
    *(ara + pos) = value;
}
void display(int *ara, int len)
{
    for (int i = 0; i < len; i++)
        cout << *(ara + i) << " ";
    cout << endl;
}

// 02. Array Deletion:

#include <bits/stdc++.h>
using namespace std;
void deletion(int *ara, int len, int pos);
void display(int *ara, int len);

int main()
{
    int ara[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(ara) / sizeof(ara[0]);
    int pos = 6;
    pos -= 1;

    deletion(ara, len, pos);
    display(ara, len);

    return 0;
}

void deletion(int *ara, int len, int pos)
{
    for (int i = pos; i < len; i++)
        *(ara + i) = *(ara + i + 1);
}
void display(int *ara, int len)
{
    for (int i = 0; i < len - 1; i++)
        cout << *(ara + i) << " ";
    cout << endl;
}

// <...............Array update,linear, babole sorts..........>

// 01. Array update:

#include <bits/stdc++.h>
using namespace std;
int update(int arr[], int len, int index, int value);
void display(int arr[], int len);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);

    int index = 5;
    int value = 555;
    update(arr, len, index, value);
    display(arr, len);
}
int update(int arr[], int len, int index, int value)
{
    for (int i = 0; i < len; i++)

        if (i == index)
            *(i + arr) = value;

    return 1;
}
void display(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        cout << *(i + arr) << " ";
    cout << '\n';
}

// 02. Array  Linear Search:

#include <bits/stdc++.h>
using namespace std;

int ser(int ara[], int len, int key);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int ara[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(ara) / sizeof(ara[0]);
    int key = 9;

    int find = ser(ara, len, key);
    (find != -1) ? cout << "find index: " << find : cout << "Not find index" << endl;

    return 0;
}

int ser(int ara[], int len, int key)
{
    for (int i = 0; i < len; i++)
        if (*(ara + i) == key)
            return i;
    return -1;
}

// 03. Bubble Sort (Ascending Order)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Print Sorted Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


// 03. Bubble Sort (descending Order)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort (Descending)
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}