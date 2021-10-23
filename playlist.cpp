#include <bits/stdc++.h>

using namespace std;

class node
{
    int data;
    node* next;
    friend class song;
};
node* head = NULL;

class song
{
    public:
    node * getnode()
    {
        node* newnode;
        newnode = new node();
        cout<<"Enter Sr. no. of song: "<<endl;
        cin>>newnode->data;
        newnode->next = NULL;
        return newnode;
    }

    void insert()
    {
        node* newnode;
        newnode = getnode();
        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
        cout<<"Song no. "<<newnode->data<<" added to playlist";
    }
    // void delete_song_from_beg()
    // {
    //     if(head == NULL)
    //     {
    //         cout<<"Sorry, Your collection of songs is null"<<endl;
    //     }
    //     else
    //     {
    //         node*temp = head;
    //         head = head->next;
    //         delete(temp);
    //         cout<<"First song from your collection is deleted"<<endl;
    //     }
    // }

    // void delete_song_from_end()
    // {
    //     if(head == NULL)
    //     {
    //         cout<<"Sorry, Your collection of songs is null"<<endl;
    //     }
    //     else
    //     {
    //         node*temp, *prev;
    //         temp = prev = head;
    //         while(temp->next != NULL)
    //         {
    //             prev = temp;
    //             temp = temp->next;
    //         }
    //         prev->next = NULL;
    //         delete(temp);
    //         cout<<"Last song from your collection is deleted"<<endl;
    //     }
    // }

    // void delete_song_from_intermidiate()
    // {
    //     node*temp,*prev;
    //     int pos, nodecrt, i = 0;
    //     cout<<"Enter the position from where you want to delete your song: "<<endl;
    //     cin>>pos;
    //     nodecrt = count_number_of_songs(head);
    //     if(pos>1 && pos<nodecrt)
    //     {
    //         temp = prev = head;
    //         i = 0;
    //         while(i<pos-1)
    //         {
    //             prev = temp;
    //             temp = temp->next;
    //             i++;
    //         }
    //         prev->next = temp->next;
    //         free(temp);
    //         nodecrt--;
    //         cout<<"song deleted"<<endl;
    //     }
    //     else
    //     {
    //         cout<<"Invalid position "<<endl;
    //     }
    // }

    int count_number_of_songs(node*head)
        {
            node*count = head;
            int i = 0;
            while(count != NULL)
            {
                i++;
                count = count->next;
            }
            return (i);

        }

    void play_songs()
    {

        node*count = head;
        if(head == NULL)
        {
            cout<<"Sorry, "<<endl;
        }
        else
        {
            while(count != NULL)
            {
                cout<<"Playing song no.: "<<count->data<<endl;
                count = count->next;
            }
            cout<<"^^^"<<endl;
        }
    }
    
};

int menu(){
    int choice;
    cout<<"\n1. Add a song in playlist";
    // cout<<"\n2. Delete a song from beginning";
    // cout<<"\n3. Delete a song from end";
    // cout<<"\n4. Delete a song from any intermidiate position";
    cout<<"\n2. Start playing songs";
    cout<<"\n3. Exit"<<endl;
    cin>>choice;
    return choice;
}


int main()
{
    int choice; 
    song s;
    while(1)
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            s.insert();
            break;
        // case 2:
        //     s.delete_song_from_beg();
        //     break;
        // case 3:
        //     s.delete_song_from_end();
        //     break;
        // case 4:
        //     s.delete_song_from_intermidiate();
        //     break;
        case 2:
            s.play_songs();
            break;
        case 3:
            exit(0);
        }
    }
    return 0;
}