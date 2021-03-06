//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@class ACAccount;

@interface MTAccountController : MTSingleton
{
    _Bool _hasFetchedInitialAccount;	// 8 = 0x8
    ACAccount *_accountOverride;	// 16 = 0x10
    ACAccount *__activeAccount;	// 24 = 0x18
}

+ (void)openAccountsPanel;	// IMP=0x000000010009125c
+ (_Bool)iTunesAccountDidChangeForACAccountNotification:(id)arg1;	// IMP=0x0000000100091154
- (void).cxx_destruct;	// IMP=0x00000001000915b4
@property(retain) ACAccount *_activeAccount; // @synthesize _activeAccount=__activeAccount;
@property(retain, nonatomic) ACAccount *accountOverride; // @synthesize accountOverride=_accountOverride;
@property _Bool hasFetchedInitialAccount; // @synthesize hasFetchedInitialAccount=_hasFetchedInitialAccount;
- (void)promptAccountAuthenticationWithDebugReason:(id)arg1;	// IMP=0x00000001000912e8
- (void)_updateActiveAccount;	// IMP=0x0000000100091074
- (id)_activeAccountBlocking;	// IMP=0x0000000100091018
- (void)didChangeStoreAccount:(id)arg1;	// IMP=0x0000000100090fcc
- (_Bool)activeAccountIsManagedAppleID;	// IMP=0x0000000100090f80
- (_Bool)isUserLoggedIn;	// IMP=0x0000000100090ee8
- (id)activeFullName;	// IMP=0x0000000100090e94
- (id)activeEmail;	// IMP=0x0000000100090e40
- (id)activeStorefront;	// IMP=0x0000000100090dec
- (id)activeDsid;	// IMP=0x0000000100090d88
- (void)setActiveAccount:(id)arg1;	// IMP=0x0000000100090d30
- (id)activeAccount;	// IMP=0x0000000100090cd4
- (void)dealloc;	// IMP=0x0000000100090c5c
- (id)init;	// IMP=0x0000000100090bb4

@end

