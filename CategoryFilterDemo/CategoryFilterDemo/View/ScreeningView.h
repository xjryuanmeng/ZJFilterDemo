//
//  ScreeningView.h
//  CategoryFilterDemo
//
//  Created by 赵娟娟 on 17/2/21.
//  Copyright © 猎鹰全球国际电子商务有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScreeningView : UIView

@property (weak, nonatomic) IBOutlet UICollectionView *screenColView;
@property (weak, nonatomic) IBOutlet UIView *screenBlackView;
@property (weak, nonatomic) IBOutlet UIButton *resetBtn;
@property (weak, nonatomic) IBOutlet UIButton *sureBtn;
@property (nonatomic, strong) void (^btnClickBlock)(NSInteger btnTag);

@end
