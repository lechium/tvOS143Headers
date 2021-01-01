//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSNumber;

@interface LoadPreorderQueueOperation : ISOperation
{
    NSNumber *_accountID;	// 96 = 0x60
    NSArray *_items;	// 104 = 0x68
}

- (id)_newURLOperation;	// IMP=0x0000000100108d6c
- (void)run;	// IMP=0x00000001001087a4
@property(readonly) NSArray *preorderItems;
@property(readonly) NSNumber *accountIdentifier;
- (void)dealloc;	// IMP=0x00000001001086d0
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x0000000100108670

@end

