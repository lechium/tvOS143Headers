//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSPowerBudget, NSDictionary;

@protocol MSPowerBudgetDelegate <NSObject>
- (void)MSPowerBudgetGotSignificantEvent:(MSPowerBudget *)arg1;
- (void)MSPowerBudget:(MSPowerBudget *)arg1 didRequestStorageOfPersistedValues:(NSDictionary *)arg2;
- (NSDictionary *)MSPowerBudgetDidRequestPersistedValues:(MSPowerBudget *)arg1;
@end

