class LRUCache{
public:
    struct node
    {
        int val;  
        int key; //you will search on the basis
        struct node *next;
        struct node *prev;
    };

    struct node *head;
    struct node *tail;
    int c; //capacity
    
    map<int,struct node*> mp;
    

    
    LRUCache(int capacity) {
        //n node c
        c = capacity;
        head = tail = NULL;
        mp.clear();
   } 
   
   //add node to the front of list
   void addFront(struct node *t)
   {
       if(head==NULL)
         head = tail = t;
       else
       {
           t->next = head;
           head->prev = t;
           head = t;
       }
   }
  
  //remove a current node 
   void removeNode(struct node *t)
   {
        if(t==head)  //if node is the first node
        {
            head = head->next;
            if(head)
             head->prev = NULL;
        }
        else if(t==tail)  //if node is the last node
        {
          tail = tail->prev;
          if(tail)
           tail->next = NULL;
        }
        else  //some node in between tail and head
        {
           t->prev->next = t->next;
           t->next->prev = t->prev;
        }
   }

   void moveFront(struct node *t)  //move current node to the front of list
   {
     if(t==head)  //already in the front
      return;
     if(t==tail)  // last node
     {
       tail = tail->prev;
       tail->next=NULL;
     }
     else  //some node in between so join its neighbours
     {
       t->prev->next = t->next;
       t->next->prev = t->prev;
     }
     
     //move to the front
     t->next = head;
     head->prev = t;
     head = t;
  }
    
    
    int get(int key) {
      if(mp.find(key)==mp.end())
         return -1; 
      else 
      {
        node *tmp = mp[key];
        moveFront(tmp);
        return tmp->val;
      }
    }
    
    void set(int key, int value) 
    {
      if(mp.find(key) != mp.end())     //if it is there in the list move to front
      {
          moveFront(mp[key]);
          mp[key]->val = value;
      }
      else   //item is not there in the list so add it
      {
          //if list is full
          if(mp.size()==c)
          {
              mp.erase(tail->key);
              removeNode(tail);
          }
          node* tmp = new node();
          tmp->val = value;
          tmp->key = key;
          mp[key] = tmp;
          addFront(tmp);
      }
    }
};
