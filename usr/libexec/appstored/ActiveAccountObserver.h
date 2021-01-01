//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount;
@protocol OS_dispatch_queue;

@interface ActiveAccountObserver : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    ACAccount *_activeAccount;	// 24 = 0x18
}

+ (_Bool)_shouldNotifyChangeFromExistingAccount:(id)arg1 toCurrentAccount:(id)arg2;	// IMP=0x000000010008e9c0
+ (void)_postAccountDidChangeFromOldAccount:(id)arg1 withAccountStore:(id)arg2;	// IMP=0x000000010008e704
+ (id)activeAccount;	// IMP=0x000000010008e0e4
+ (id)sharedInstance;	// IMP=0x000000010008de34
- (void).cxx_destruct;	// IMP=0x000000010008ed78
@property(readonly) ACAccount *activeAccount; // @synthesize activeAccount=_activeAccount;
- (void)handleAccountStoreDidChangeNotification:(id)arg1;	// IMP=0x000000010008e140
- (id)init;	// IMP=0x000000010008dea0

@end

