//
//  YYDealsTopMenu.m
//  YYDeal
//
//  Created by ihefe-0004 on 16/3/9.
//  Copyright © 2016年 Hanrovey. All rights reserved.
//

#import "YYDealsTopMenu.h"

@interface YYDealsTopMenu()
@end

@implementation YYDealsTopMenu

+ (instancetype)menu
{
    return [[[NSBundle mainBundle] loadNibNamed:@"YYDealsTopMenu" owner:nil options:nil] firstObject];
}

- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    if (self = [super initWithCoder:aDecoder]) {
#warning 禁止默认的拉伸现象
        self.autoresizingMask = UIViewAutoresizingNone;
    }
    return self;
}

- (void)addTarget:(id)target action:(SEL)action
{
    [self.imageButton addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
}
@end
