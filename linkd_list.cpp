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