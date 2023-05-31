//  co-cosm.h is included in every module as the result of the option:
//  -header(co-cosm.h) in co-cosm.lnt

// _asm is a function built into the Cosmic compiler.
// It needs to be declared here so that the result of an _asm() appears
// to return an integer.
int _asm( char *, ... );
