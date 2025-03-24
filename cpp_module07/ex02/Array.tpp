#ifndef ARRAY_TPP
#define ARRAY_TPP

template<typename T>
Array<T>::Array()
{
    this->arr = new T[1];
    this->arr[0] = 0;
    this->len = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    this->arr = new T[n];
    this->len = n;
    for(long i = 0; i < n; i++)
        this->arr[i] = 0;
}

template<typename T>
Array<T>::Array(const Array &obj)
{
    this->arr = new T[obj.size()];
    this->len = obj.size();
    for(long i = 0; i < this->len; i++)
        this->arr[i] = obj.arr[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &obj)
{
    if(this != &obj)
    {
        delete[] this->arr;
        this->arr = new T[obj.size()];
        this->len = obj.size();
        for(long i = 0; i < this->len; i++)
            this->arr[i] = obj.arr[i];
    }
    return(*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int idx)
{
    if (this->len <= idx)
        throw (std::out_of_range("Out of range!"));
    return (this->arr[idx]);
}


#endif