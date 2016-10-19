//
//  DYPageControlView.h
//  DYCollectionScroll
//
//  Created by Ethank on 2016/10/12.
//  Copyright © 2016年 DY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DYPageControlView : UIView
/**总页数*/
@property(assign,nonatomic) NSInteger numberOfPages;
/**当前页*/
@property(assign,nonatomic) NSInteger currentPage;

/**所有分页dot的背景*/
@property (nonatomic, strong) UIImage *allPageDotImage;
/**当前dot的背景*/
@property (nonatomic, strong) UIImage *currentPageDotImage;

/**所有分页dot的背景颜色*/
@property (nonatomic, strong) UIColor *allPageDotBackgroundColor;
/**当前dot的背景颜色*/
@property (nonatomic, strong) UIColor *currentPageDotColor;

/**dot的圆角,默认是dot点高的一半*/
@property (nonatomic, assign)  CGFloat dotCorner;

+ (instancetype)pageControlViewWithFrame:(CGRect)frame;
/**
 dotsSize:点的大小
 dotsMargin:点之间的间距
 */
+ (instancetype)pageControlViewWithFrame:(CGRect)frame dotsSize:(CGSize)dotsSize dotsMargin:(CGFloat)dotsMargin;
@end
