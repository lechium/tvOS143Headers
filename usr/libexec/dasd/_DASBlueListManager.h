//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDContextualKeyPath;
@protocol OS_dispatch_source, _CDLocalContext;

@interface _DASBlueListManager : NSObject
{
    _Bool _blueListEnabled;	// 8 = 0x8
    int _lpmNotifyToken;	// 12 = 0xc
    id <_CDLocalContext> _context;	// 16 = 0x10
    _CDContextualKeyPath *_blueListKeyPath;	// 24 = 0x18
    _CDContextualKeyPath *_pushBudgetKeyPath;	// 32 = 0x20
    _CDContextualKeyPath *_pushBudgetResetKeyPath;	// 40 = 0x28
    long long _pushBudget;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_budgetResetTimer;	// 56 = 0x38
}

+ (id)managerWithContext:(id)arg1;	// IMP=0x000000010003e0c0
+ (long long)nextHoursBudgetWithPreviousBudget:(long long)arg1;	// IMP=0x000000010003e0a4
- (void).cxx_destruct;	// IMP=0x000000010003f0c8
@property(nonatomic) int lpmNotifyToken; // @synthesize lpmNotifyToken=_lpmNotifyToken;
@property(nonatomic) _Bool blueListEnabled; // @synthesize blueListEnabled=_blueListEnabled;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *budgetResetTimer; // @synthesize budgetResetTimer=_budgetResetTimer;
@property(nonatomic) long long pushBudget; // @synthesize pushBudget=_pushBudget;
@property(retain, nonatomic) _CDContextualKeyPath *pushBudgetResetKeyPath; // @synthesize pushBudgetResetKeyPath=_pushBudgetResetKeyPath;
@property(retain, nonatomic) _CDContextualKeyPath *pushBudgetKeyPath; // @synthesize pushBudgetKeyPath=_pushBudgetKeyPath;
@property(retain, nonatomic) _CDContextualKeyPath *blueListKeyPath; // @synthesize blueListKeyPath=_blueListKeyPath;
@property(retain, nonatomic) id <_CDLocalContext> context; // @synthesize context=_context;
- (void)registerForBlueListNotifications;	// IMP=0x000000010003e9f0
- (_Bool)shouldBlueListPushes;	// IMP=0x000000010003e734
- (void)updateBlueListStatus:(_Bool)arg1;	// IMP=0x000000010003e690
- (void)setupResetTimer;	// IMP=0x000000010003e544
- (_Bool)overBudget;	// IMP=0x000000010003e500
- (void)decrementPushBudgetRemaining;	// IMP=0x000000010003e4a0
- (void)updateBudgetsForNextSlot;	// IMP=0x000000010003e460
- (void)updateGlobalBudget:(long long)arg1;	// IMP=0x000000010003e3a8
- (id)initWithContext:(id)arg1;	// IMP=0x000000010003e110

@end

