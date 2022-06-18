# Drogon-demo
WebフレームワークDrogonお試し

## Drogonインストール手順
- Ubuntu LTS 20.04(Windowsでは面倒だったのでMac or Linuxがオススメ)<br>

参考：https://zenn.dev/cork/articles/drogon_tutorial

``` bash
git clone https://github.com/an-tao/drogon
cd drogon
git submodule update --init
mkdir build
cd build
sudo apt update && sudo apt upgrade -y
sudo apt install cmake
sudo apt-get install libjsoncpp-dev
sudo apt-get install -y uuid-dev
cmake ..
make && sudo make install
```

以下のコマンドで「drogon」と表示されたら成功
``` bash
drogon_ctl -v
```
