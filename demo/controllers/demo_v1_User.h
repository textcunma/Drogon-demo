#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

namespace demo
{
namespace v1
{
class User : public drogon::HttpController<User>
{
  public:
    METHOD_LIST_BEGIN
    // Getでアクセスされた場合、getInfo()メソッドの処理をする

    METHOD_ADD(User::login,"/token?userId={1}&passwd={2}",Post);
    METHOD_ADD(User::getInfo,"/{1}/info?token={2}",Get);
    // http://localhost/demo/v1/user/text/info?token=111

    METHOD_LIST_END
    // メソッドの宣言：実装は「demo_v1_User.cc」に行う
    void login(const HttpRequestPtr &req,
                std::function<void (const HttpResponsePtr &)> &&callback,
                std::string &&userId,
                const std::string &password);

    void getInfo(const HttpRequestPtr &req,
                  std::function<void (const HttpResponsePtr &)> &&callback,
                  std::string userId,
                  const std::string &token) const;
};
}
}
