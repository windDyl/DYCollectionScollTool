//
//  DYCollectionScollTool.h
//  DYCollectionScroll
//
//  Created by Ethank on 2016/10/12.
//  Copyright © 2016年 DY. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DYPageControlView;
@interface DYCollectionScollTool : UIView

/**图片资源数组*/
@property (nonatomic, strong) NSArray *dy_imgs;

/**标题数组*/
@property (nonatomic, strong) NSArray *dy_titles;

/**是否无限循环轮播*/
@property (nonatomic, assign)  BOOL dy_loop;

/**自动轮播时间间隔，默认为0，0表示不开启自动轮播*/
@property (nonatomic, assign)  NSTimeInterval dy_automaticallyScrollDuration;

/**图片的展开方式*/
@property (nonatomic, assign)  UIViewContentMode dy_imageContentMode;

/**占位图片*/
@property (strong, nonatomic) UIImage *dy_placeholderImage;

+ (instancetype)dy_collectionScrollToolWithFrame:(CGRect)frame;

/**分页控制(相关属性自行设置，不设置使用默认属性)*/
@property (strong, nonatomic) DYPageControlView *dy_pageControlView;
/**标题*/
@property (nonatomic, strong) UILabel *dy_titleLabel;
@end
