#include <iostream>
using namespace std;

string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int total = 0;

void enter()
{
    int choice;
    cout << "Total number of Students = ";
    cin >> choice;
    total = choice;

    if(total == 0)
    {
        for (int i = 0; i < choice; i++)
        {
        cout << "\nEnter data of student : " << i + 1 << endl << endl;

        cout << "Enter name : ";
        cin >> arr1[i];

        cout << "Enter Roll no. : ";
        cin >> arr2[i];

        cout << "Course : ";
        cin >> arr3[i];

        cout << "Branch : ";
        cin >> arr4[i];

        cout << "Contact no. : ";
        cin >> arr5[i];
        }
        total = choice;
    }

    else
    {
    for (int i = total; i < total + choice; i++)
    {
        cout << "\nEnter data of student : " << i + 1 << endl << endl;

        cout << "Enter name : ";
        cin >> arr1[i];

        cout << "Enter Roll no. : ";
        cin >> arr2[i];

        cout << "Course : ";
        cin >> arr3[i];

        cout << "Branch : ";
        cin >> arr4[i];

        cout << "Contact no. : ";
        cin >> arr5[i];
    }
    total=total+choice;
    }
} 

void show()
{
    for (int i = 0; i < total; i++)
    {
        cout << "\nData of student : " << i + 1 << endl << endl;
        cout << "Name : " << arr1[i] << endl;
        cout << "Roll no. : " << arr2[i] << endl;
        cout << "Course : " << arr3[i] << endl;
        cout << "Branch : " << arr4[i] << endl;
        cout << "Contact no. : " << arr5[i] << endl;
    }
}

void search()
{
    string rollno;
    cout<<"Enter roll no of student which you want to search: ";
    cin >> rollno;
    for(int i=0;i<total;i++)
    {
        if(rollno == arr2[i])
        {
        cout << "\nData of student : " << i + 1 << endl << endl;
        cout << "Name : " << arr1[i] << endl;
        cout << "Roll no. : " << arr2[i] << endl;
        cout << "Course : " << arr3[i] << endl;
        cout << "Branch : " << arr4[i] << endl;
        cout << "Contact no. : " << arr5[i] << endl;
        }
    }

}

void update()
{
    string rollno;
    bool found = false;

    cout << "Enter roll no of student which you want to update: ";
    cin >> rollno;

    for(int i = 0; i < total; i++)
    {
        if(rollno == arr2[i])
        {
            found = true;

            cout << "\nPrevious Data:\n";
            cout << "Name : " << arr1[i] << endl;
            cout << "Roll no. : " << arr2[i] << endl;
            cout << "Course : " << arr3[i] << endl;
            cout << "Branch : " << arr4[i] << endl;
            cout << "Contact no. : " << arr5[i] << endl;

            cout << "\nEnter New Data:\n";

            cout << "Enter name : ";
            cin >> arr1[i];

            cout << "Enter Roll no. : ";
            cin >> arr2[i];

            cout << "Course : ";
            cin >> arr3[i];

            cout << "Branch : ";
            cin >> arr4[i];

            cout << "Contact no. : ";
            cin >> arr5[i];

            cout << "\nRecord updated successfully!\n";

            break; // ✅ VERY IMPORTANT
        }
    }

    if(!found)
    {
        cout << "\nRecord not found!\n";
    }
}
  
delete_record()
{
    int a;
    cout<<"Press 1 to delete full record"<<endl;
    cout<<"Press 2 to delete specific record"<<endl;
    cin>>a;
    if(a==1)
    {
        total=0;
        cout<<"All record is deleted"<<endl;
    }
    else if(a==2)
    {
        string rollno;
        cout<<"Enter rollno which you want to delete"<<endl;
        cin>>rollno;
        for(int i=0;i<total;i++)
        if(rollno==arr2[i])
        {
            for(int j=i;j<total-1;j++)
            {
                arr1[j]=arr1[j+1];
                arr2[j]=arr2[j+1];
                arr3[j]=arr3[j+1];
                arr4[j]=arr4[j+1];
                arr5[j]=arr5[j+1];
            }
            total--;
            cout<<"Your required record is deleted!"<<endl;

        }
    }
}

int main()
{
    int value;
    while(true)
    {
        cout<<"Press 1 to Enter Data"<<endl;
        cout<<"Press 2 to Show Data"<<endl;
        cout<<"Press 3 to Search Data"<<endl;
        cout<<"Press 4 to Update Data"<<endl;
        cout<<"Press 5 to Delete Data"<<endl;
        cout<<"Press 6 to Exit"<<endl;

        cin>>value;

        switch (value)
        {
            case 1: enter(); break;
            case 2: show(); break;
            case 3: search(); break;
            case 4: update(); break;
            case 5: delete_record(); break;
            case 6: exit(0);
            default: cout<<"Invalid Input"<<endl;
        }
    }
}
