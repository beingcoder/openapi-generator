/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef _OAI_OAIUserApiHandler_H_
#define _OAI_OAIUserApiHandler_H_

#include <QObject>

#include "OAIUser.h"
#include <QList>
#include <QString>

namespace OpenAPI {

class OAIUserApiHandler : public QObject
{
    Q_OBJECT
    
public:
    OAIUserApiHandler();
    virtual ~OAIUserApiHandler();


public slots:
    virtual void createUser(OAIUser oai_user);
    virtual void createUsersWithArrayInput(QList<OAIUser> oai_user);
    virtual void createUsersWithListInput(QList<OAIUser> oai_user);
    virtual void deleteUser(QString username);
    virtual void getUserByName(QString username);
    virtual void loginUser(QString username, QString password);
    virtual void logoutUser();
    virtual void updateUser(QString username, OAIUser oai_user);
    

};

}

#endif // _OAI_OAIUserApiHandler_H_
