//
//  Header.h
//  Freege
//
//  Created by Chang on 2017/12/28.
//  Copyright © 2017年 Freege Studio. All rights reserved.
//

#ifndef Header_h
#define Header_h
// --   -   -   -   --  -   -   -   -- -

#if DEBUG
//#define API_DOMAIN  @"http://192.168.0.160:8089/"///测试服务器
#define API_DOMAIN  @"https://askj.bisilai.com/"///正式服务器

#else
#define API_DOMAIN  @"https://askj.bisilai.com/"///正式服务器
#endif

/** 账户密码登录 */
#define API_Login_Account  API_DOMAIN"api/v1/user/account"
#define API_Login_Code     API_DOMAIN"api/v1/login/show"


#if DEBUG

#define NSLog(FORMAT, ...) fprintf(stderr,"[%s:%d行] %s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);

//#define NSLog(...) NSLog(@"%s 第%d行 \n %@\n\n",__func__,__LINE__,[NSString stringWithFormat:__VA_ARGS__])


#else
// 调到release模式 nslog 不会走
#define NSLog(FORMAT, ...) nil

#endif



//RGB颜色
#define RGBACOLOR(r,g,b,a)      [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
//随机色
#define RANDOW_COLOR            [UIColor colorWithRed:(arc4random()%100)/100.0 green:(arc4random()%100)/100.0 blue:(arc4random()%100) alpha:1]



#define KScreenHeight   [[UIScreen mainScreen] bounds].size.height
#define KScreenWidth    [[UIScreen mainScreen] bounds].size.width



#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)


//Vier圆角
#define ViewRadius(View,Radius)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES]

//View圆角加边框
#define ViewBorderRadius(View,Radius,Width,Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]]

//阴影
#define ViewShadow(View,Color,Offset,Radius,Opacity)\
\
[View.layer setShadowColor:[Color CGColor]];\
[View.layer setShadowOffset:(Offset)];\
[View.layer setShadowRadius:(Radius)];\
[View.layer setShadowOpacity:(Opacity)]


#define IMAGE_NAMED(name)[UIImage imageNamed:name]


#define KUserAppLoad    @"user_app_load"

//用户Token
#define KUserToken      @"user_token"

//用户手机号
#define KUserPhone      @"user_telphone"






// -    -   -   --  -   -   -       --  -
#endif /* Header_h */
