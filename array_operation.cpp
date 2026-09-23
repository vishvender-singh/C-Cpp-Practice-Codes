#include<iostream.h>
#include<conio.h>
#include<process.h> 

void traverse(int arr[], int n);
void insert(int arr[], int &n);
void del(int arr[], int &n);
void search(int arr[], int n);
void merge();

void main()
{
    int arr[50];
    int n = 0;
    int choice;
    clrscr();
    
    cout<<"Enter initial size of array: ";
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cout<<"Enter element "<<i<<": ";
        cin>>arr[i];
    }
    
    while(1) 
    {
        cout<<"\n\n--- ARRAY OPERATIONS MENU ---";
        cout<<"\n1. Traverse (Print Array)";
        cout<<"\n2. Insert Element";
        cout<<"\n3. Delete Element";
        cout<<"\n4. Search Element";
        cout<<"\n5. Merge Two New Arrays";
        cout<<"\n6. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        
        switch(choice)
        {
            case 1: traverse(arr, n); 
                    break;
            case 2: insert(arr, n); 
                    break;
            case 3: del(arr, n); 
                    break;
            case 4: search(arr, n); 
                    break;
            case 5: merge(); 
                    break; 
            case 6: exit(0); 
            default: cout<<"\nInvalid choice! Try again.";
        }
    }
}

void traverse(int arr[], int n)
{
    cout<<"\n Array elements are: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void insert(int arr[], int &n)
{
    int value, pos;
    cout<<"\nEnter new element to insert: ";
    cin>>value;
    cout<<"Enter position (index 0 to "<<n<<"): ";
    cin>>pos;
    for(int i=n-1; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    n++;
    
    cout<<"\n Element inserted successfully!";
}

void del(int arr[], int &n)
{
    int value, pos = -1;
    cout<<"\n Enter value to delete: ";
    cin>>value;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == value)
        {
            pos = i;
            break;
        }
    }
    
    if(pos == -1)
    {
        cout<<"\n No data found!";
    }
    else
    {
        
        for(int i=pos; i<n-1; i++)
        {
            arr[i] = arr[i+1];
        }
        n--; 
        
        cout<<"\n Element deleted successfully!";
    }
}

void search(int arr[], int n)
{
    int value, pos = -1;
    cout<<"\n Enter value to search: ";
    cin>>value;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i] == value)
        {
            pos = i + 1; 
            break;
        }
    }
    
    if(pos == -1)
        cout<<"\n No data found!";
    else
        cout<<"\n Successfully found at position "<<pos;
}

void merge()
{
    int arr1[5], arr2[5], arr3[10];
    
    cout<<"\n--- Merging Operation ---";
    cout<<"\n Enter 5 elements for 1st array:\n";
    for(int i=0; i<=4; i++) 
     {    
       cin>>arr1[i];
    }
    cout<<"\n Enter 5 elements for 2nd array:\n";
    for(int i=0; i<=4; i++) 
     {
     cin>>arr2[i];
    
    }
    for(int i=0; i<=9; i++)
    {
        if(i<=4)
            arr3[i] = arr1[i];
        else
            arr3[i] = arr2[i-5];
    }
    
    cout<<"\nArray after merging: ";
    for(int i=0; i<=9; i++)
    {
        cout<<arr3[i]<<" ";
    }
}
