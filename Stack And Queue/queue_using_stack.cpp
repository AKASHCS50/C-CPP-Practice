
/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */


// Making enqueue costly
// Making dequeue costly

/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
        // while(!s2.empty())
        // {
        //     int x = s2.top();
        //     s1.push(x);
        //     s2.pop();
        // }
     
        // s1.push(x);
        
        // while(!s1.empty())
        // {
        //     int x = s1.top();
        //     s2.push(x);
        //     s1.pop();
        // }
        
        s1.push(x);
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
    // if(s2.empty())
    //     return -1;
    // else
    // {
    //     int x = s2.top();
    //     s2.pop();
    //     return x;
    // }
    
    if(s1.empty() && s2.empty())
        return -1;
        
    if(s2.empty())
    {
        while(!s1.empty())
        {
            int x = s1.top();
            s2.push(x);
            s1.pop();
        }
    }
    
    int x = s2.top();
    s2.pop();
    return x;
}
