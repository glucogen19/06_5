#include "tbook.h"
#include <QString>

TBook::TBook()
{
    authorLabel = "Johann Wolfgang von Goethe";
    nameLabel = "Faust: A Tragedy";
    countLabel = 1;
}

QString TBook::getAuthor() const
{
    return authorLabel;
}

QString TBook::getName() const
{
    return nameLabel;
}

int TBook::getCount() const
{
    return countLabel;
}
