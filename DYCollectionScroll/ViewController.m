//
//  ViewController.m
//  DYCollectionScroll
//
//  Created by Ethank on 2016/10/12.
//  Copyright © 2016年 DY. All rights reserved.
//

#import "ViewController.h"
#import "DYCollectionScollTool.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    DYCollectionScollTool *carouselView = [DYCollectionScollTool dy_collectionScrollToolWithFrame:CGRectMake(0, 0, [UIScreen mainScreen].bounds.size.width, 300)];
    carouselView.dy_loop = YES;
    carouselView.dy_automaticallyScrollDuration = 1;
    carouselView.dy_imgs = @[@"https://d13yacurqjgara.cloudfront.net/users/26059/screenshots/2047158/beerhenge.jpg",
                             @"https://d13yacurqjgara.cloudfront.net/users/26059/screenshots/2016158/avalanche.jpg",
                             @"https://d13yacurqjgara.cloudfront.net/users/26059/screenshots/1839353/pilsner.jpg",
                             @"https://d13yacurqjgara.cloudfront.net/users/26059/screenshots/1833469/porter.jpg"];
    carouselView.dy_placeholderImage = [UIImage imageNamed:@"zhanweifu"];
    carouselView.dy_titles = @[@"first",@"second",@"third",@"fourth",@"fifth"];
    [self.view addSubview:carouselView];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
