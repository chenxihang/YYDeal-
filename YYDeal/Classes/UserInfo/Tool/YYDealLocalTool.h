//
//  YYDealLocalTool.h
//  YYDeal
//
//  Created by Ihefe_Hanrovey on 16/9/9.
//  Copyright © 2016年 Hanrovey. All rights reserved.
//  处理团购的本地数据（浏览记录和收藏记录）

#import <Foundation/Foundation.h>
#import "YYSingleton.h"
@class YYDeal;
@interface YYDealLocalTool : NSObject
YYSingletonH(DealLocalTool)

/**
 *  返回最近浏览的团购
 */
@property (nonatomic, strong, readonly) NSMutableArray *historyDeals;
/**
 *  保存最近浏览的团购
 */
- (void)saveHistoryDeal:(YYDeal *)deal;
/**
 *  取消浏览的团购
 */
- (void)unsaveHistoryDeal:(YYDeal *)deal;
- (void)unsaveHistoryDeals:(NSArray *)deals;


/**
 *  返回最近收藏的团购
 */
@property (nonatomic, strong, readonly) NSMutableArray *collectDeals;
/**
 *  保存最近收藏的团购
 */
- (void)saveCollectDeal:(YYDeal *)deal;
/**
 *  取消收藏的团购
 */
- (void)unsaveCollectDeal:(YYDeal *)deal;
- (void)unsaveCollectDeals:(NSArray *)deals;
@end
