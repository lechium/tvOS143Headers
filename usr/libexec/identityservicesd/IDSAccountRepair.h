//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSSystemAccountAdapter, NSTimer;
@protocol IMUserDefaults;

@interface IDSAccountRepair : NSObject
{
    _Bool _shouldSupressRepairLogic;	// 8 = 0x8
    _Bool _waitingForMigration;	// 9 = 0x9
    IDSDAccountController *_accountController;	// 16 = 0x10
    IDSSystemAccountAdapter *_systemAccountAdapter;	// 24 = 0x18
    id <IMUserDefaults> _userDefaults;	// 32 = 0x20
    NSTimer *_repairTimer;	// 40 = 0x28
    NSTimer *_phoneRepairTimer;	// 48 = 0x30
    double _lastBagRepairInterval;	// 56 = 0x38
}

+ (double)_phoneNumberRepairIntervalForCount:(long long)arg1;	// IMP=0x000000010014d664
+ (double)_phoneNumberRepairMaxInterval;	// IMP=0x000000010014d560
+ (double)_phoneNumberRepairInterval;	// IMP=0x000000010014d448
- (void).cxx_destruct;	// IMP=0x000000010014ff88
@property(nonatomic) _Bool waitingForMigration; // @synthesize waitingForMigration=_waitingForMigration;
@property(nonatomic) double lastBagRepairInterval; // @synthesize lastBagRepairInterval=_lastBagRepairInterval;
@property(retain, nonatomic) NSTimer *phoneRepairTimer; // @synthesize phoneRepairTimer=_phoneRepairTimer;
@property(retain, nonatomic) NSTimer *repairTimer; // @synthesize repairTimer=_repairTimer;
@property(retain, nonatomic) id <IMUserDefaults> userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) IDSSystemAccountAdapter *systemAccountAdapter; // @synthesize systemAccountAdapter=_systemAccountAdapter;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(nonatomic) _Bool shouldSupressRepairLogic; // @synthesize shouldSupressRepairLogic=_shouldSupressRepairLogic;
- (_Bool)_repairPhoneNumberAccounts;	// IMP=0x000000010014ecd8
- (void)_phoneNumberRepairTimerHit:(id)arg1;	// IMP=0x000000010014e7c4
- (void)_resetPhoneNumberRepairCounter;	// IMP=0x000000010014e6bc
- (void)recalculatePhoneRepairTimer;	// IMP=0x000000010014e4e4
- (void)setupPhoneNumberRepairTimer;	// IMP=0x000000010014d9c8
- (id)_totalRepairCountFromPrefs;	// IMP=0x000000010014d954
- (id)_lastRepairIntervalFromPrefs;	// IMP=0x000000010014d8e0
- (_Bool)_shouldNotSetupPhoneNumberRepairTimer;	// IMP=0x000000010014d838
- (void)repairiCloudBasedAccounts;	// IMP=0x000000010014cb70
- (void)_repairiTunesBasedAccounts;	// IMP=0x000000010014c3f0
- (void)_createAndEnableExistingSystemAccounts;	// IMP=0x000000010014c03c
- (id)_createiTunesAccountFromSystemIfNeeded;	// IMP=0x000000010014bb00
- (_Bool)_hasActiveAppleIDBasedAccountOnService:(id)arg1;	// IMP=0x000000010014b864
- (id)_activeAppleIDAccount;	// IMP=0x000000010014b608
- (void)repairService:(id)arg1 withPrimaryUserName:(id)arg2;	// IMP=0x0000000100148f90
- (void)repairAccounts;	// IMP=0x0000000100146bf4
- (void)_repairAccountsWithSuccessfullAppleIDRegistrationForDSID:(id)arg1 service:(id)arg2;	// IMP=0x0000000100145f1c
- (void)_repairAccountsWithSuccessfulPhoneNumberRegistration;	// IMP=0x0000000100144e5c
- (void)kickRepairForAllRegistrationsSucceeded:(id)arg1;	// IMP=0x0000000100144418
- (_Bool)_shouldBypassRepairLogic;	// IMP=0x0000000100144208
- (void)_repairTimerHit:(id)arg1;	// IMP=0x0000000100143f04
- (void)forceRepairAccounts:(id)arg1;	// IMP=0x0000000100143b0c
- (id)initWithAccountController:(id)arg1 systemAccountAdapter:(id)arg2 userDefaults:(id)arg3;	// IMP=0x0000000100143734

@end

