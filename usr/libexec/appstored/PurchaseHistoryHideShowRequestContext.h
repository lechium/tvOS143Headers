//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, NSArray;

@interface PurchaseHistoryHideShowRequestContext : NSObject
{
    NSArray *_items;	// 8 = 0x8
    ACAccount *_account;	// 16 = 0x10
    AMSProcessInfo *_clientInfo;	// 24 = 0x18
}

+ (id)newContextWithItems:(id)arg1 account:(id)arg2 client:(id)arg3;	// IMP=0x000000010026de34
- (void).cxx_destruct;	// IMP=0x000000010026dfc0
@property(readonly) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly) ACAccount *account; // @synthesize account=_account;
@property(readonly) NSArray *items; // @synthesize items=_items;
- (id)_initWithItems:(id)arg1 account:(id)arg2 client:(id)arg3;	// IMP=0x000000010026dec4

@end

