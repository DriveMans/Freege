# Freege
## 这个工程用来学习上传到github和实验一些Git命令
## github默认是不能提交空目录的，所以需要在项目根目录下输入这个命令：
`find . -type d -empty -exec touch {}/.gitignore \`




## 关于pod
### 更新pod
`pod repo update`
### 项目使用CocoaPods
打开终端，进入到工程根目录，执行以下命令，会自动生成Podfile
`pod init`
然后使用CocoaPods进行安装。如果尚未安装CocoaPods运行一下命令进行安装
`gem install cocoapods`
项目使用CocoaPods
在文件 `Podfile`中加入你需要使用的第三方库
```
pod `第三方库名`,`-> 版本号`
```
然后运行以下命令：
`pod install`




