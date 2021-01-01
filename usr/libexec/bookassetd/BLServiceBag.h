//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSBagProtocol-Protocol.h"

@class AMSBag, AMSBagValue, AMSProcessInfo, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface BLServiceBag : NSObject <AMSBagProtocol>
{
    AMSBag *_bag;	// 8 = 0x8
}

+ (id)_keySet;	// IMP=0x00000001000056bc
+ (id)defaultBag;	// IMP=0x0000000100005544
- (void).cxx_destruct;	// IMP=0x0000000100005724
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00000001000056ac
- (id)URLForKey:(id)arg1;	// IMP=0x000000010000569c
- (id)stringForKey:(id)arg1;	// IMP=0x000000010000568c
- (id)integerForKey:(id)arg1;	// IMP=0x000000010000567c
- (id)doubleForKey:(id)arg1;	// IMP=0x000000010000566c
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000565c
- (id)boolForKey:(id)arg1;	// IMP=0x000000010000564c
- (id)arrayForKey:(id)arg1;	// IMP=0x000000010000563c
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly) AMSBagValue *pushNotificationEnvironment;
- (id)init;	// IMP=0x000000010000540c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly) Class superclass;

@end

