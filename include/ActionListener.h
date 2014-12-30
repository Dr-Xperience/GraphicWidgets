#ifndef ACTIONLISTENER_H
#define ACTIONLISTENER_H


class ActionListener
{
    public:
        virtual ~ActionListener();
        virtual void actionPerformed()=0;
    protected:
    private:
};

#endif // ACTION LISTENER_H
