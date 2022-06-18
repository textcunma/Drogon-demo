# Drogon-demo
WebフレームワークDrogonお試し

## Drogonインストール手順
- Ubuntu LTS 20.04(Windowsでは面倒だったのでMac or Linuxがオススメ)<br>

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

## プロジェクト作成と実行

プロジェクトディレクトリ名「demo」

``` bash
# プロジェクト作成コマンド
drogon_ctl create project demo
# プロジェクトディレクトリのビルドに移動
cd ./dmeo/build
# Makefile作成
cmake
# ビルド&コンパイル
make
# 実行
sudo ./demo

# ↑強制的に80番ポートを使用するためsudoを使用。sudoを用いなければ80番ポートが別のプロセスで使用されていた場合にはエラーになってしまう。
```

## 参考Webサイト
- [Drogon公式ドキュメント](https://drogon.docsforge.com/)
- [「Drogon」入門](https://zenn.dev/cork/articles/drogon_tutorial)
- [最速のC++ Webフレームワーク「Drogon」を試してみた！](https://rightcode.co.jp/blog/information-technology/fastest-c-web-framework-drogon-quick-start)

## 私的感想
C++のWebフレームワークと聞いてやってみたが、環境構築が面倒な割に想像より面白くなかった