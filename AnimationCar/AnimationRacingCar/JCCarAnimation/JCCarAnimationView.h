//
//  JCCarAnimationView.h
//  AnimationRacingCar
//
//  Created by Ten on 2018/7/21.
//  Copyright © 2018年 Ten. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^WinNumberBlock)(NSMutableArray *array);

@interface JCCarAnimationView : UIView

@property(nonatomic,copy)WinNumberBlock numberBlock;


//传入开奖号码，先排序，完成后开始冲刺

@end
