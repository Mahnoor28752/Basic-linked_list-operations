#include <iostream>
#include <cstdlib>
#include<cstring>
using namespace std;

struct node {
    string name;
    int rollnumber;
    float GPA;
    node* adrs;
};

class list {
private:
    node* s;
    node* c;
	node* n;
public:
    list() {
        s = c = NULL;
    }

    ~list() {
        node* temp;
        while (s != NULL) {
            temp = s;
            s = s->adrs;
            delete temp;
        }
    }

    void creat_list()
	 {
    	if(s==NULL)
    	{
    		s=new node;
        cout << "*** Enter your name ***" << endl;
        cin >> s->name;
        cout << "*** Enter your rollnumber *** " << endl;
        cin >> s->rollnumber;
        cout << "*** Enter your GPA *** " << endl;
        cin >> s->GPA;
        s->adrs = NULL;
        c=s;
		}
else	
{
        node* n = new node;
        cout << "*** Enter your name ***" << endl;
        cin >> n->name;
        cout << "*** Enter your rollnumber *** " << endl;
        cin >> n->rollnumber;
        cout << "*** Enter your GPA *** " << endl;
        cin >> n->GPA;
        n->adrs = NULL;
        c->adrs=n;
        c=n;
}
    }

    void display() {
        node* temp = s;
        if (temp == NULL) {
        	cout<<"======================"<<endl;
            cout << "The list is empty..." << endl;
            cout<<"======================"<<endl;
         cout << "Press any key to continue...";
        cin.ignore();  
        cin.get();    
        system("cls"); 
            return;
        }
        while (temp != NULL) {
        	cout<<"==================================="<<endl;
            cout << "          Name: " << temp->name << endl;
            cout << "          Roll number: " << temp->rollnumber << endl;
            cout << "          GPA: " << temp->GPA << endl;
            cout<<"==================================="<<endl;
            temp = temp->adrs;
        }
        cout << "Press any key to continue...";
        cin.ignore();  
        cin.get();    
        system("cls"); 
    }

    void add_at_start() {
        node* Nnode = new node;
        cout << "*** Enter your name *** "<<endl;
        cin >> Nnode->name;
        cout <<" *** Enter your rollnumber *** "<<endl;
        cin >> Nnode->rollnumber;
        cout << "*** Enter your GPA *** "<<endl;
        cin >> Nnode->GPA;
        Nnode->adrs = s;
        s = Nnode;
    }
    void highest_GPA()
    	{
    	node* temp = s;
        if (temp == NULL) {
        	cout<<"======================"<<endl;
            cout << "The list is empty..." << endl;
            cout<<"======================"<<endl;
         cout << "Press any key to continue...";
        cin.ignore();  
        cin.get();    
        system("cls"); 
            return;
        }
        while (temp != NULL) 
        	if(temp->GPA>3.5)
			{
        	cout<<"==================================="<<endl;
            cout << "          Name: " << temp->name << endl;
            cout << "          Roll number: " << temp->rollnumber << endl;
            cout << "          GPA: " << temp->GPA << endl;
            cout<<"==================================="<<endl;
            temp = temp->adrs;
        }
        cout << "Press any key to continue...";
        cin.ignore();  
        cin.get();    
        system("cls"); 
		}
		string uppercase(string str)
		{
			for(int i=0;i<str.size();i++)
				{
					str[i]=toupper(str[i]);
				}
			return str;
		}
		void Update_uppercase()
			{
				node* temp = s;
        if (temp == NULL) {
        	cout<<"======================"<<endl;
            cout << "The list is empty..." << endl;
            cout<<"======================"<<endl;
         cout << "Press any key to continue...";
        cin.ignore();  
        cin.get();    
        system("cls"); 
            return;
        }
        while (temp != NULL) {
        	temp->name=uppercase(temp->name);
        	cout<<"==================================="<<endl;
            cout << "          Name: " << temp->name << endl;
            cout << "          Roll number: " << temp->rollnumber << endl;
            cout << "          GPA: " << temp->GPA << endl;
            cout<<"==================================="<<endl;
            temp = temp->adrs;
        }
        cout << "Press any key to continue...";
        cin.ignore();  
        cin.get();    
        system("cls"); 
		}
		void merge (list & l2)
			{
				if(s==NULL)
				{
					s=l2.s;
				}
				else
				{
					c=s;
					while(c->adrs!=NULL)
						{
							c=c->adrs;
						}
					c->adrs=l2.s;
				}
			l2.s=NULL;
			}
		void Delete_from_start()
			{
				node * temp=s;
				if(temp==NULL)
					{
						cout<<"=================================="<<endl;
						cout<<"    Linked list is empty..."<<endl;
						cout<<"=================================="<<endl;
						cout<<"Press any key to continue...."<<endl;
						cin.ignore();
						cin.get();
						system("cls");
						return;
					}
				else
					{
						temp=s;
						s=s->adrs;
						delete temp;
						cout<<"=================================="<<endl;
						cout<<" Node deleted successfully..."<<endl;
						cout<<"=================================="<<endl;
						cin.ignore();
						cin.get();
						system("cls");
					}
			}
	void Delete_from_End() {
        if (s == NULL) {
            cout << "==================================" << endl;
            cout << "    Linked list is empty..." << endl;
            cout << "==================================" << endl;
            cout << "Press any key to continue...." << endl;
            cin.ignore();
            cin.get();
            system("cls");
            return;
        } else if (s->adrs == NULL)
		 { 
            delete s;
            s = NULL;
            cout << "==================================" << endl;
            cout << " Node deleted successfully..." << endl;
            cout << "==================================" << endl;
            cout<<"Press any key to contine..."<<endl;
            cin.ignore();
            cin.get();
            system("cls");
            return;
        } else {
            node* temp = s;
            while (temp->adrs->adrs != NULL)
			 {
                temp = temp->adrs;
            }
            delete temp->adrs; 
            temp->adrs = NULL;
            cout << "==================================" << endl;
            cout << " Node deleted successfully..." << endl;
            cout << "==================================" << endl;
            cout<<"Press any key to contine..."<<endl;
            cin.ignore();
            cin.get();
            system("cls");
        }
    }
};

void Menu() {
    cout << "************************ Menu option *************************" << endl;
    cout << "*         1) Add students data                               *" << endl;
    cout << "*         2) Add student data at start                       *" << endl;
    cout << "*         3) Display all students                            *" << endl;
    cout << "*  	  4) Display students with maximum GPA               *" << endl;
    cout << "*         5) Update name by capital letter                   *" << endl;
    cout << "*         6) Merge 2 linked lists                            *" << endl;
    cout << "*         7) Delete node from start                          *" << endl;
    cout << "*         8) Delete node from end                            *" << endl;
    cout << "*         9) Exit                                            *" << endl;
    cout << "**************************************************************" << endl;
}

int main() {
    list l1,l2;
    int choice;
    while (true) {
        Menu();
        cout << endl;
        cout << "*** Enter your choice ***"<<endl;
        cin >> choice;

        system("cls"); 
        switch (choice) {
            case 1: {
                int n;
                cout<<"================================================="<<endl;
                cout <<"Enter the number of students you want to enter: "<<endl;
                cout<<"================================================="<<endl;
                cin >> n;
                for (int i = 0; i < n; i++) {
                cout<<"==============="<<endl;
                cout<<"Student # "<<i+1<<endl;
                cout<<"==============="<<endl;
                    l1.creat_list();
                    system("cls");
                }
                break;
            }
            case 2:
                l1.add_at_start();
                system("cls");
                break;
            case 3:
                l1.display();
                break; 
            case 4:
            	l1.highest_GPA();
            	break;
            case 5:
            	l1.Update_uppercase();
            	break;
            case 6:
             	cout<<"============================================================================"<<endl;
            	cout<<"  Enter the how many elements you want to enter in second linked list..."<<endl;
            	cout<<"============================================================================"<<endl;
            	int n;
            	cin>>n;
            	for(int i=0;i<n;i++)
            		{
            			l2.creat_list();
					}
				l1.merge(l2);
				cout<<"Press any key to continue..."<<endl;
				cin.ignore();
				cin.get();
				system("cls");
				break;
			case 7:
					l1.Delete_from_start();
					break;
			case 8:
					l1.Delete_from_End();
					break;
            case 9:
                cout << "=======================" << endl;
                cout << "Exiting the program...." << endl;
                cout << "=======================" << endl;
                system("cls");
                return 0;
            default: {
                cout << "=======================" << endl;
                cout << "    Invalid choice... " << endl;
                cout << "=======================" << endl;
                system("cls");
            }
        }
    }
    return 0;
}