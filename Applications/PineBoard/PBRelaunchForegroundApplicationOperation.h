//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSSet;

@interface PBRelaunchForegroundApplicationOperation : NSOperation
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
    NSSet *_updatingApplicationIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001cd7c
@property(readonly, nonatomic) NSSet *updatingApplicationIdentifiers; // @synthesize updatingApplicationIdentifiers=_updatingApplicationIdentifiers;
- (void)start;	// IMP=0x000000010001c628
- (_Bool)isFinished;	// IMP=0x000000010001c5b8
- (_Bool)isExecuting;	// IMP=0x000000010001c548
- (_Bool)isAsynchronous;	// IMP=0x000000010001c528
- (id)initWithUpdatingApplicationIdentifiers:(id)arg1;	// IMP=0x000000010001c418

@end

