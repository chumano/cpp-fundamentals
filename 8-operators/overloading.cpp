class Student
{
public:
    Student(int age)
    {
        this->age = age;
    }
    int age;
    bool operator<(Student b) const
    {
        return this->age < b.age;
    }

    bool operator>(Student b) const
    {
        return this->age > b.age;
    }

    bool operator==(Student b) const
    {
        return this->age == b.age;
    }

    //=========
    bool operator<(int b) const
    {
        return this->age < b;
    }

    bool operator>(int b) const
    {
        return this->age > b;
    }

    bool operator==(int b) const
    {
        return this->age == b;
    }

    //prefix ++x
    int operator++()
    {
       return ++(this->age);
    }

    // postfix x++
    int operator++(int) { 
        return (this->age)++;
    }

    int operator+(const Student &b) const
    {
       // b.age++; // b is const so can;t modified
       return this->age + b.age;
         
    }

    int operator*(Student b) const
    {
        return this->age * b.age;
    }
};