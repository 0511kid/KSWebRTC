//
//  KSNavigationBar.h
//  KSWebRTC
//
//  Created by saeipi on 2020/8/8.
//  Copyright © 2020 saeipi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KSButton.h"
@interface KSNavigationBar : UIView

@property(nonatomic,copy)NSString *title;
@property(nonatomic,weak)UIButton *backBarButtonItem;

- (void)toFront;

@end
