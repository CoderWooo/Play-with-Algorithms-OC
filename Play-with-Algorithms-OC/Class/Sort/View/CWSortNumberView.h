//
//  CWSortNumberView.h
//  Play-with-Algorithms-OC
//
//  Created by wuzhibo on 2017/7/12.
//  Copyright © 2017年 CoderWoo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CWSortModel.h"
@interface CWSortNumberView : UIView
@property(nonatomic, strong) UILabel *contentLabel;
@property(nonatomic, assign) BOOL isEnd;
@property(nonatomic, assign) BOOL isSelected;

@property(nonatomic, strong) CWSortModel *model;
@end
