///2018-1-60-236
///Md. Tanvir Hassan

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int number;
    node *next;
};


bool isEmpty(node *head);

void customer_order();
void category();
void monthly_report();
void last_report();

char menu();

    void insertAsFirstElement(node *&head, node *&last, int number);
    void insert(node *&head, node *&last, int number);
    void remove(node *&head, node *&last);
    void showList(node *current);


bool isEmpty(node *head)
{
    if (head == NULL)

        return true;

    else
        return false;

    }

char menu()
{

char choice;

    cout << "***Menu***\n";
    cout << "1. Add a Tool.\n";
    cout << "2. Remove a Tool.\n";
    cout << "3. Show the Tool List.\n";
    cout << "4. Exit the Program.\n";
    cout << "5. customer Order.\n";
    cout << "6. The Information of sold Tools of Per Category.\n";
    cout << "7. Monthly Selling Reports of Tools.\n";
    cout << "8. The last sold report.\n";

    cin >> choice;

return choice;
}

void insertAsFirstElement(node *&head, node *&last, int number)

{
    node *temp = new node;
    temp->number = number;
    temp->next = NULL;
    head = temp;
    last = temp;
}

void insert(node *&head, node *&last, int number)

{

    if (isEmpty(head))

    insertAsFirstElement(head, last, number);

    else
    {
        node *temp = new node;
        temp->number = number;
        temp->next = NULL;
        last->next = temp;
        last = temp;
}

}

void remove(node *&head, node *&last)

{

if (isEmpty(head))

    cout << "The list is already empty.\n";

else if (head == last)

{
    delete head;
    head == NULL;

    last == NULL;
}

else

{
    node *temp = head;
    head = head->next;

    delete temp;
}

}

void showList(node *current)

{

if (isEmpty(current))

    cout << "The list is empty\n";

else

{
    cout << "The list contains: \n";

while (current != NULL)

{
    cout << current->number << endl;
    current = current->next;
}

}

}

int main()
 {
    node *head = NULL;
    node *last = NULL;

    char choice;

    int number;

do {

choice = menu();

switch (choice)

{

    case '1':
        cout << "Please enter a number: ";
        cin >> number;

    insert(head, last, number);

    break;

    case '2':
        remove(head, last);

    break;

    case '3':
         showList(head);

    break;

    case '4':
         showList(head);

    break;
    ///case '5':
    ///    customer_order();

    ///break;

    ///case '6':
    ///    category();
    ///break;

    ///case '7':
    ///    monthly_report();
    ///break;

    ///case '8':
    ///    last_report();
    ///break;


    default:
         cout << "Exit the program\n";

}

} while (choice != '4');

return 0;

}

///void customer_order(){
//
//
//int queue[100], n = 100, front = - 1, rear = - 1;
//void Insert() {
//   int val;
//   if (rear == n - 1)
//      cout<<"Queue Overflow"<<endl;
//   else {
//      if (front == - 1)
//      front = 0;
//      cout<<"Insert the element in queue : "<<endl;
//      cin>>val;
//      rear++;
//      queue[rear] = val;
//   }
//}
//void Delete() {
//   if (front == - 1 || front > rear) {
//      cout<<"Queue Underflow ";
//   return ;
//   } else {
//      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
//      front++;;
//   }
//}
//void Display() {
//   if (front == - 1)
//   cout<<"Queue is empty"<<endl;
//   else {
//      cout<<"Queue elements are : ";
//      for (int i = front; i <= rear; i++)
//         cout<<queue[i]<<" ";
//      cout<<endl;
//   }
//}
//int main() {
//   int ch;
//   cout<<"1) Insert element to queue"<<endl;
//   cout<<"2) Delete element from queue"<<endl;
//   cout<<"3) Display all the elements of queue"<<endl;
//   cout<<"4) Exit"<<endl;
//do {
//   cout<<"Enter your choice : "<<endl;
//   cin<<ch;
//   switch (ch) {
//      case 1: Insert();
//         break;
//      case 2: Delete();
//         break;
//      case 3: Display();
//         break;
//      case 4: cout<<"Exit"<<endl;
//         break;
//      default: cout<<"Invalid choice"<<endl;
//   }
//} while(ch!=4);
//
//}
//
///}

///void category()
//{
//
//}
///void monthly_report()
//{
//
//}
///void last_report()
//{
//
//}
//
