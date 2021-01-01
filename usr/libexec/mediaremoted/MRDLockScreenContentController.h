//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MRDLockScreenContentControllerDelegate, OS_dispatch_queue;

@interface MRDLockScreenContentController : NSObject
{
    id <MRDLockScreenContentControllerDelegate> _delegate;	// 8 = 0x8
    long long _suggestionCount;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000b5a8c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property long long suggestionCount; // @synthesize suggestionCount=_suggestionCount;
@property(nonatomic) __weak id <MRDLockScreenContentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool lockScreenPlatterHasContent;

@end

