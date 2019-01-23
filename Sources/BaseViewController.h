//
//  BaseViewController.h
//  LotteryOfBeijing
//
//  Created by chenbo on 2017/4/24.
//  Copyright © 2017年 chenbo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseViewController : UIViewController

@property (nonatomic, assign) NSInteger fromPage;               //跳转来源
@property (nonatomic, assign) BOOL isHidenNaviBar;
@property (nonatomic, copy) void(^refreshBlock)(void);


@end
