
template <class T>
class Accum
{
private:
    T total;

public:
    Accum(T initVal){
        this->total = initVal;
    }

    T operator+(const T &t)
    {
        return total = total + t;
    }

    Accum<T> operator+=(const T &t)
    {
        total = total + t;
        auto a = *this;
        return a;
    }

    T GetTotal(){
        return total;
    }
};
