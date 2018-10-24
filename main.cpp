#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    int factInt(int n1)
    {
        if(n1 <= 1)
        {   return 1;   }
        else
        {   return n1*factInt(n1-1);    }
    }
    QVector<int>factVec(int n1)
    {
        QVector<int>ve1(n1);
        SomeMy so1;
        for(int i1=0;i1<n1;i1++)
        {
            ve1 [i1]= so1.factInt(i1);
        }
        return ve1;
    }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;    

    QVector<int>ve1;
    int n1 = 11;
    ve1 = s1.factVec(n1);
    qDebug() << n1 << " " << ve1;

    for(int i1=1;i1<20;i1++)
    {

    }
    return a.exec();
}
