//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPProcessEvent.h"

@class SASampleStore;

@interface SPReparsedProcess : SPProcessEvent
{
    SASampleStore *_sampleStore;	// 336 = 0x150
}

- (_Bool)_saveReportToStream:(struct __sFILE *)arg1;	// IMP=0x000000010001475c
- (void)dealloc;	// IMP=0x000000010001470c
- (_Bool)setTargetProcessWithHint:(id)arg1;	// IMP=0x00000001000146b4
- (id)initWithSampleStore:(id)arg1;	// IMP=0x00000001000144a4

@end

