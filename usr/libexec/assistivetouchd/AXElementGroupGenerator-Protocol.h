//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AXElementGroup, NSArray;

@protocol AXElementGroupGenerator <NSObject>
- (NSArray *)generateElementsForGroup:(AXElementGroup *)arg1;

@optional
- (void)didGenerateElements:(AXElementGroup *)arg1;
- (void)willGenerateElements:(AXElementGroup *)arg1;
@end

