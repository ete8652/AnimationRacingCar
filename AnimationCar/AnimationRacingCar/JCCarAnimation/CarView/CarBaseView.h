//
//  CarBaseView.h
//  AnimationRacingCar
//
//  Created by Ten on 2018/7/22.
//  Copyright © 2018年 Ten. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^GetCarXBlock)(CGFloat x,NSInteger carIndex);


@interface CarBaseView : UIView

@property(nonatomic,assign)NSInteger index;//赛车类型编号
@property(nonatomic,assign)CGFloat releaseX;//真实x坐标
@property(nonatomic,copy)GetCarXBlock carXBlock;

//初始化
-(void)initAnimal:(NSInteger)number;

//开始动画
-(void)speedStartAnimation;

//加速动画
-(void)speedUPAnimation;

//减速动画
-(void)speedDownAnimation;

//停止动画(比赛结束后)
-(void)speedStopAnimation;

-(void)GIFAnimation;//开启GIF动画

@end
