#ifndef TBOOK_H
#define TBOOK_H
#include <QString>

class TBook
{
public:
    TBook();
    QString getAuthor() const;
    QString getName() const;
    int getCount() const;

private:
    QString authorLabel;
    QString nameLabel;
    int countLabel;
};

#endif // TBOOK_H
