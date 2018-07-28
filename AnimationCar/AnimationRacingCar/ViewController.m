//
//  ViewController.m
//  AnimationRacingCar
//
//  Created by Ten on 2018/7/21.
//  Copyright © 2018年 Ten. All rights reserved.
//

#import "ViewController.h"
#import "JCCarAnimationView.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UILabel *lab = [[UILabel alloc]initWithFrame:CGRectMake(0, 300, self.view.frame.size.width, 50)];
    [self.view addSubview:lab];
    
    JCCarAnimationView *view = [[JCCarAnimationView alloc]initWithFrame:CGRectMake(0, 80, self.view.frame.size.width, 200)];
    
    view.numberBlock = ^(NSMutableArray *array) {
        lab.text = @"";
        for (NSString *str in array) {
            lab.text = [lab.text stringByAppendingString:[NSString stringWithFormat:@"++%@",str]];
        }
    };
    [self.view addSubview:view];
    
    
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
