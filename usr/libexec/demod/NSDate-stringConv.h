//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (stringConv)
+ (id)dateFromString:(id)arg1;	// IMP=0x0000000100078d94
- (id)timeZoneFromISO8601DateString:(id)arg1;	// IMP=0x0000000100078f28
- (id)toString;	// IMP=0x0000000100078e04
- (_Bool)isEarlierDateThan:(id)arg1;	// IMP=0x000000010007a198
- (_Bool)isLaterDateThan:(id)arg1;	// IMP=0x000000010007a144
- (id)newDateByAddingOneDay;	// IMP=0x000000010007a0d4
- (id)newDateByAddingOneWeek;	// IMP=0x000000010007a064
- (id)endOfDay;	// IMP=0x0000000100079ff0
- (id)startOfDay;	// IMP=0x0000000100079f8c
@end

