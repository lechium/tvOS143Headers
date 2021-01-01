//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BLDownloadDataConsumer : NSObject
{
    _Bool _overrideProgress;	// 8 = 0x8
}

@property(nonatomic) _Bool overrideProgress; // @synthesize overrideProgress=_overrideProgress;
- (void)truncate;	// IMP=0x0000000100076ea0
- (void)suspend;	// IMP=0x0000000100076e9c
@property(readonly, nonatomic) unsigned long long resumptionOffset;
- (void)reset;	// IMP=0x0000000100076e90
@property(readonly, nonatomic) double percentComplete;
- (_Bool)finish:(id *)arg1;	// IMP=0x0000000100076e80
@property(readonly, nonatomic) _Bool hasConsumedData;
@property(readonly, nonatomic) unsigned long long diskUsage;
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100076e68

@end

