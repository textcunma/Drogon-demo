#include "ListParameters.h"
void ListParameters::asyncHandleHttpRequest(
    const HttpRequestPtr &req,
    std::function<void(const HttpResponsePtr &)> &&callback) {
    // write your application logic here
    
    // CSPに渡すデータを格納
    auto para = req->getParameters();
    HttpViewData data;
    data.insert("title", "list parameters");
    data.insert("parameters", para);

    // ListParaCsp.cspにデータを渡す
    auto res =
        drogon::HttpResponse::newHttpViewResponse("ListParaCsp.csp", data);
    callback(res);
}