

             --------------------------------------------------
                   --- Manual Additions/Modifications  ---
             --------------------------------------------------
                       PC-lint for C/C++ Version 9.00a

    This readme.txt supplements the on-line PC-lint manual entitled
    "Reference Manual for PC-lint/Flexelint" found in the installation
    directory under the name "pc-lint.pdf"


                ------ Printing the Reference Manual  ------

    You have permission to print out the Reference Manual (or other
    related documentation) in whole or in part in support of the use of
    this software.


       ------ Support for Microsoft through Visual Studio 2008  ------

    We currently support Microsoft Visual C/C++ 9.0 (as well as all
    earlier versions of the Microsoft compiler series).  Support comes
    mainly from the compiler options files (co-...lnt).  For example
    options files co-msc70.lnt, co-msc71.lnt, co-msc80.lnt and
    co-msc90.lnt support versions 7.0, 7.1, 8.0 and 9.0 respectively.


                          ------ What's New  ------

    To find out what we've added to the product since Version 8.00,
    check out Chapter 20 "What's New" in the Reference Manual.


                          ------ Front End  ------

    Your linting experience will be considerably enhanced by adapting
    your favorite editor or compiler environment to the task of
    sequencing from error to error.  See Section 3.5 of the Reference
    Manual.


                       ------ Multiple Passes  ------

    By default, PC-lint/FlexeLint will go through all your modules in
    one pass.  For projects not previously linted there will be enough
    messages to look at.  However, with just one pass, you will not be
    taking full advantage of our new static data tracking or the
    interfunction value tracking.  With just one pass, we cannot say
    very much about static variables.  We may see a variable being set
    to a value but we don't know of intervening functions that may be
    modifying the variable.  We will also not know about dangerous
    return values for functions that are defined later than they are
    called, and we will not know about dangerous arguments for functions
    that are defined early.  To introduce a second pass you need only to
    add the command line option:

        -passes(2)

    or, if this syntax presents a problem with your Shell, you may use:

        -passes[2]

    or, in some cases,

        -passes=2

    is needed.  Of course, you can replace the 2 with any number you
    wish.  The larger the number, the more bugs that can be found and
    the more time that will be required.

    See Section 10.2 "Value Tracking" in the Reference Manual.



                        Gimpel Software
                        September, 2008
