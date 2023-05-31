
// The following declarations have been taken from
//   "Effective C++" by Scott Myers, 1992, Addison-Wesley, p.46

class Array
    {
    private:
	int *data;
	unsigned size;
	int lBound, hBound;
    public:
	Array( int lowBound, int highBound );
	~Array();
    };

class NamedArray: public Array
    {
    private:
	const char * const arrayName;
    public:
	NamedArray( int lowBound, int highBound, const char *name );
	~NamedArray();
    };
