class MyStack
{
  queue<int> one;
  queue<int> two;

public:
  /** Initialize your data structure here. */
  MyStack()
  {
  }

  /** Push element x onto stack. */
  void push(int x)
  {
    one.push(x);
  }

  /** Removes the element on top of the stack and returns that element. */
  int pop()
  {
    int sz = one.size();

    while (--sz)
    {
      auto f = one.front();
      one.pop();
      two.push(f);
    }

    auto ans = one.front();
    one.pop();

    while (two.size())
    {
      auto f = two.front();
      two.pop();
      one.push(f);
    }

    return ans;
  }

  /** Get the top element. */
  int top()
  {
    int sz = one.size() + 1;
    auto last = one.front();

    while (--sz)
    {
      last = one.front();
      one.pop();
      two.push(last);
    }

    while (two.size())
    {
      auto f = two.front();
      two.pop();
      one.push(f);
    }

    return last;
  }

  /** Returns whether the stack is empty. */
  bool empty()
  {
    return one.empty() && two.empty();
  }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */