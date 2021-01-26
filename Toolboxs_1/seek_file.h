#ifndef SEEK_FILE_H
#define SEEK_FILE_H
#include "QBoxLayout"
#include "QLineEdit"
#include "QPushButton"
#include "QWidget"
class Seek_File : public QWidget {
public:
  Seek_File();

private:
  QPushButton *start;
  QVector<QPushButton> buts;
  QLineEdit *name;
  QHBoxLayout *hlay;
  QGridLayout *glay;
  QVBoxLayout *blay;
};

#endif // SEEK_FILE_H
