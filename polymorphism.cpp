#include <iostream>
using namespace std;
class Notification
{
public:
    virtual void send()
    {
        cout << "base notification";
    }
};
class PushNotification : public Notification
{
public:
    void send()
    {
        cout << "push notification" << endl;
    }
};
class EmailNotification : public Notification
{
public:
    void send()
    {
        cout << "email notification" << endl;
    }
};
class SMSNotification : public Notification
{
public:
    void send()
    {
        cout << "sms notification" << endl;
    }
};

int main()
{
    Notification *n;
    PushNotification pn;
    EmailNotification en;
    SMSNotification sn;
    n = &pn;
    n->send();
    n = &en;
    n->send();
    n = &sn;
    n->send();

    return 0;
}