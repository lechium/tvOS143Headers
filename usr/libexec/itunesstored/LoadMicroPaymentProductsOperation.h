//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, StoreKitClientIdentity;
@protocol SKProductsResponse;

@interface LoadMicroPaymentProductsOperation : ISOperation
{
    StoreKitClientIdentity *_clientIdentity;	// 96 = 0x60
    NSArray *_productIdentifiers;	// 104 = 0x68
    id <SKProductsResponse> _response;	// 112 = 0x70
}

- (_Bool)_loadResponseForIdentity:(id)arg1 batchSize:(long long)arg2 returningError:(id *)arg3;	// IMP=0x000000010005539c
- (id)_copyResponseForIdentity:(id)arg1 identifiers:(id)arg2 returningError:(id *)arg3;	// IMP=0x000000010005519c
- (id)_copyQueryStringDictionaryForIdentity:(id)arg1 productIdentifiers:(id)arg2;	// IMP=0x0000000100054f90
- (long long)_batchSizeForIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100054d6c
- (void)run;	// IMP=0x000000010005484c
@property(copy) StoreKitClientIdentity *clientIdentity;
@property(readonly) NSArray *productIdentifiers;
- (id)copyProductsResponse;	// IMP=0x0000000100054770
- (void)dealloc;	// IMP=0x00000001000546ac
- (id)initWithProductIdentifiers:(id)arg1;	// IMP=0x0000000100054644

@end

