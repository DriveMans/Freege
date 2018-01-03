//
//  TabBarControllerConfig.h
//  Freege
//
//  Created by Chang on 2017/12/29.
//  Copyright © 2017年 Freege Studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CYLTabBarController.h>

@interface TabBarControllerConfig : NSObject

@property (nonatomic,readonly,strong) CYLTabBarController *tabBarController;
@property (nonatomic,copy           ) NSString            *context;

@end
