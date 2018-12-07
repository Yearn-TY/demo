#include"Spider.h"

int main()
{
    cout<<"*******************************"<<endl;
    cout<<"*   欢迎使用人工智能网络爬虫    *"<<endl;
    cout<<"*         当前版本v1.0         *"<<endl;
    cout<<"*******************************"<<endl; 
    cout<<"请输入要抓去的URL链接："<<endl;
    //创建img文件夹
    CreateDirectory(L"./img",NULL);

    string url;//起始URL
    cin>>url;

    // 正式开始
    StartCatch(url);

    return 0;
}
bool StartCatch(string url)
{
    queue<string> q;

    while(!q.empty())
    {
        q.push(url);
        // 取出URL
        string currentUrl=q.front();
        q.poop();
        //解析URL
        CHttp http;
        http.
    }

    return true;
}

//解析URL
bool CHttp::AnalyseUrl(std::string url)
{   //http://  www.27270.com  /ent/mingxingtuku/2015/43320.html
    if(string::npos==url.find("http://"))
        return false;
    if(url.length()<=7)
        return false;
    int pos=url.find('/',7);
    if(string::npos==pos)
    {
        m_host=url.substr(7);
        m_object="/";
    }
    else
    {
        m_host=url.substr(7,pos-7);
        m_object=url.substr(pos);
    }
    if(m_host.empty())
    return false


    return true;
}

bool CHttp::Init()
{
    WSADATA wd；
    WSAStartup(MAKEWORD(2,2),&wd);
    if(0!=WSAStartup(MAKEWORD(2,2),&wd));
    //创建套接字
    //http协议
    //tcp协议
    socket(AF_INET,SOCK_STREAM,0);
}