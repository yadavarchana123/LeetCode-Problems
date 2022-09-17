# Using Linklist (By creating linklist manually)
```
class Linklist{
    public:
    int val;
    Linklist* next;
    Linklist(int x)
    {
        val = x;
        next = NULL;
    }
};
void print(Linklist* head)
{
    while(head)
    {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<"\n";
}
class FrontMiddleBackQueue {
public:
    Linklist* list = new Linklist(0);
    Linklist* ptr = list;
    int size = 0;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
         Linklist* temp = new Linklist(val);
         temp->next = list->next;
         list->next = temp;
         size++;
         print(list->next);
    }
    
    void pushMiddle(int val) {
        int k;
        k = size/2;
        Linklist* temp = list;
        while(temp and k>0)
            temp = temp->next, k--;
        Linklist* temp1 = new Linklist(val);
        Linklist* temp2 =  temp->next ;
        temp->next = temp1;
        temp1->next = temp2;
        size++;
        print(list->next);
    }
    
    void pushBack(int val) {
       Linklist* temp1 = new Linklist(val),*temp2 = list;  
       while(temp2->next){
           temp2 = temp2->next;
       }
        temp2->next = temp1;
        size++;
        print(list->next);
    }
    
    int popFront() {
        if(size==0) return -1;
        int value = list->next->val;
        if(list->next)
        list->next = list->next->next;
        size--;
        print(list->next);
        return value;
    }
    
    int popMiddle() {
        if(size==0) return -1;
        int k;
        if(size%2) k = size/2;
        else k = size/2-1;
        Linklist* temp = list;
        while(temp and k>0)
            temp = temp->next, k--;
        int value = temp->next->val;
        if(temp->next)
        temp->next = temp->next->next;
        size--;
        print(list->next);
        return value;
    }
    
    int popBack() {
        if(size==0) return -1;
        if(size==1)
        {
            int value = list->next->val;
            list->next = NULL;
            size--;
            return value;
        }
       Linklist* temp = list;  
       while(temp->next->next){
           temp = temp->next;
       }
        int value = temp->next->val;
        temp->next = NULL;
        size--;
        print(list->next);
        return value;
    }
};
