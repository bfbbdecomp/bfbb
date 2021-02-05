#ifndef _EXCEPTION_H
#define _EXCEPTION_H

namespace std
{
    class exception
    {
    public:
        exception() throw();
        exception(const exception&) throw();
        exception& operator=(const exception&) throw();
        virtual ~exception() throw();
        virtual const char* what() const throw();
    };

    class bad_exception : public exception
    {
    public:
        bad_exception() throw();
        bad_exception(const bad_exception&) throw();
        bad_exception& operator=(const bad_exception&) throw();
        virtual ~bad_exception() throw();
        virtual const char* what() const throw();
    };
} // namespace std

#endif