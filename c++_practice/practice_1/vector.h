//vector.h

class vector {
    public:
        Vector(int s);
        double& operator[](int i);
        int size();

    private:
        double* elem;
        int sz;

};
