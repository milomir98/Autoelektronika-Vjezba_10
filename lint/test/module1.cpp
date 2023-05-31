
extern "C"
    {
    int alpha(int);
    }

class X
    {
    void f(int k)
	{ n = alpha(k); }
    int n;
    };
