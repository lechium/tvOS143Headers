//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, TVHMediaEntitiesGridDataSource, TVHSortOption;

@protocol TVHMediaEntitiesGridDataSourceDelegate <NSObject>

@optional
- (void)mediaEntitiesGridDataSource:(TVHMediaEntitiesGridDataSource *)arg1 currentSortDidChange:(TVHSortOption *)arg2;
- (void)mediaEntitiesGridDataSource:(TVHMediaEntitiesGridDataSource *)arg1 didChangeMediaEntitiesWithChangeSets:(NSDictionary *)arg2;
@end

