class Base
{
public:
    virtual void mf1() const;
    virtual void mf2(int x) = 0;
    virtual void mf3() &;
    void mf4() const; // is not declared virtual in Base
};

class Derived : public Base
{
public:
    void mf1() const override;
    void mf2(int x) override;
    void mf3() & override;
    void mf4() const;
};