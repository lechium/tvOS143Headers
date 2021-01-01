//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSDictionary, NSMutableArray;

@interface RestoreBatchContext : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    NSMutableArray *_hardFailures;	// 16 = 0x10
    NSDictionary *_itemMap;	// 24 = 0x18
    NSMutableArray *_remainingItemIDs;	// 32 = 0x20
    NSMutableArray *_softFailures;	// 40 = 0x28
    NSMutableArray *_successfulItems;	// 48 = 0x30
    NSArray *_targetItems;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010016c4fc
@property(readonly) NSArray *targetItems; // @synthesize targetItems=_targetItems;
@property(readonly, nonatomic) NSMutableArray *successfulItems; // @synthesize successfulItems=_successfulItems;
@property(readonly, nonatomic) NSMutableArray *softFailures; // @synthesize softFailures=_softFailures;
@property(readonly, nonatomic) NSMutableArray *remainingItemIDs; // @synthesize remainingItemIDs=_remainingItemIDs;
@property(readonly) NSDictionary *itemMap; // @synthesize itemMap=_itemMap;
@property(readonly, nonatomic) NSMutableArray *hardFailures; // @synthesize hardFailures=_hardFailures;
- (void)softFailItem:(id)arg1 withError:(id)arg2;	// IMP=0x000000010016c42c
- (void)itemSucceeded:(id)arg1 storeItem:(id)arg2;	// IMP=0x000000010016c118
- (void)hardFailItem:(id)arg1 withError:(id)arg2;	// IMP=0x000000010016c080
- (id)initWithItems:(id)arg1 account:(id)arg2;	// IMP=0x000000010016bc6c

@end

