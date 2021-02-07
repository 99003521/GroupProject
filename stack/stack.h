#ifndef __GSTACK_H
#define __GSTACK_H

constexpr int max_size=50;

template<typename T>
class MyStack {
  T m_arr[max_size];
  int m_top;
  int m_maxlen;
  
  public:
  MyStack():m_arr(),m_top(0),m_maxlen(max_size)
  {

  }
  MyStack(T len):m_arr(),m_top(0),m_maxlen(len)
  {

  }
  void push(T val);
  T pop();
  T peek();
  bool isEmpty();
  bool isFull();
};
template<typename T>
void MyStack<T>::push(T p){
  m_arr[++m_top]=p;
}

template<typename T>
T MyStack<T>::pop(){
  m_top--;
  return peek();
}
template<typename T>
T MyStack<T>::peek(){
  return m_arr[m_top];
}
template<typename T>
bool MyStack<T>::isEmpty(){
  if(-1==m_top){
    return true;
  }
  else{return false;}
}
template<typename T>
bool MyStack<T>::isFull(){
  if(49==m_top){
    return true;
  }
  else{return false;}
}

#endif
