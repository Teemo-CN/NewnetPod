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

/*
 *显示没有数据的页面
 **/
- (void)showNoDataImage;
/*
 *移除没有数据的页面
 **/
- (void)removeNoDataImage;
/*
 *需要登录
 **/
- (void)needLoginPoint;

@end
