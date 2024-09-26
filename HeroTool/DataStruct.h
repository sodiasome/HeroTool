#pragma once


#include <QVector>

// person信息
typedef struct Person_t {
    QString name;   // 姓名
    QString sex;    // 性别
} Person;

// 省份信息
typedef struct Province_t {
    QString name;
    QVector<Person*> people;
} Province;

// 树列号
enum COLUMN
{
    COLUMN_NAME = 0,
    COLUMN_SEX,
    COLUMN_AGE,
    COLUMN_PHONE
};
