//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface PDPeerPaymentWebServiceAccountFetch : NSObject
{
    NSMutableArray *_completionHandlers;	// 8 = 0x8
    _Bool _updateAccount;	// 16 = 0x10
    _Bool _updateAssociatedAccounts;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x0000000100258d9c
@property(readonly, copy, nonatomic) NSArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic) _Bool updateAssociatedAccounts; // @synthesize updateAssociatedAccounts=_updateAssociatedAccounts;
@property(nonatomic) _Bool updateAccount; // @synthesize updateAccount=_updateAccount;
- (id)description;	// IMP=0x0000000100258c8c
- (_Bool)_canCoalesceRequest:(id)arg1;	// IMP=0x0000000100258c10
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x0000000100258b7c
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100258ac8

@end

