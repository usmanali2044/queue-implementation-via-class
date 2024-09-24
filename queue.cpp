// the first will be front and the last will rear 
// rear will be used when we dequeue
// and front will be used when we queue


#include <iostream>
#include <windows.h>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front = -1;
    int rear = -1;

    Queue(int size){
        this->size = size;
        arr = new int[size];
    }

   static void getArraySize(){
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    Queue create(n);

    create.menu();
   } // geting size of array end here
    

    void menu(){
       system("cls");
        while(true){
        char choice;
        cout << "\n\n Queue Program " << endl;
        cout << "Press 1. To Queued " << endl;
        cout << "Press 2. To DeQueued " << endl;
        cout << "Press 3. To Check Element In the Queued " << endl;
        cout << "Press 4. To Check the size of Queue " << endl;
        cout << "Press 5. To Exit " << endl;
        cin >> choice;

        switch(choice){
            case '1':
            queued();
            break;
            case '2':
            dequed();
            break;       
            case '3':
            printElements();
            break;
            case '4':
            cout << "The size of the Queue " << sizeofQueue();
            break;
            case '5':
            exit(0);
            break;
            default:
            cout << "Invalid Input Please Try Again " << endl;
            break;

        }
    }

    } // menu function end here

    void queued(){

        if(isfull()){
            cout << "The Que Size Reached To Its Limit " << size << endl;
            
        }else{
            rear = rear+1;
            int n;
            cout << "Enter the value TO QUEUED at : " << rear+1 << " : ";
            cin >> n;
            arr[rear] = n;

            
        }
            return;
        
    } // queued function end here


    bool isfull(){
        if(rear==size-1){
            return true;
        }else{
            return false;
        }
    } // isfull function end here
    

    void dequed(){
        if(isempty()){
            cout << "The Queued is empty " << endl;
        }else{
            front++;
            arr[front]=0;
            cout << "The Element is Dequed at index " << front+1 << endl;
        }
    }

    bool isempty(){
    if(rear==front){
        return true;
    }    
        return false;
    }


    void printElements(){
        for(int i=0;i<size;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int sizeofQueue(){
        return size;
    }
    
};





int main(){
    Queue::getArraySize();
    return 0;
}