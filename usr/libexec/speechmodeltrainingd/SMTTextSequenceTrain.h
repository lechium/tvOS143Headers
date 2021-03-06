//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SMTTextSequence-Protocol.h"

@class NSMutableArray, NSString;

@interface SMTTextSequenceTrain : NSObject <SMTTextSequence>
{
    NSMutableArray *_sequence;	// 8 = 0x8
    NSMutableArray *_target;	// 16 = 0x10
    NSMutableArray *_mask;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100008660
- (id)mask;	// IMP=0x0000000100008658
- (id)target;	// IMP=0x0000000100008650
- (id)sequence;	// IMP=0x0000000100008648
- (void)addWordWithInputId:(unsigned long long)arg1 target:(unsigned long long)arg2 mask:(unsigned long long)arg3;	// IMP=0x0000000100008580
- (void)addWordWithInputId:(unsigned long long)arg1;	// IMP=0x000000010000852c
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x0000000100008460
- (id)init;	// IMP=0x0000000100008448

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

