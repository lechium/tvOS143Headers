//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface SubscriptionEntitlementsOperation : ISOperation
{
    _Bool _ignoreCaches;	// 91 = 0x5b
    NSString *_clientIdentifier;	// 96 = 0x60
    CDUnknownBlockType _subscriptionEntitlementsBlock;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000100090218
@property(copy) CDUnknownBlockType subscriptionEntitlementsBlock; // @synthesize subscriptionEntitlementsBlock=_subscriptionEntitlementsBlock;
@property _Bool ignoreCaches; // @synthesize ignoreCaches=_ignoreCaches;
@property(copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (id)_fetchSubscriptionEntitlements:(id *)arg1;	// IMP=0x000000010008fd78
- (void)run;	// IMP=0x000000010008faac

@end
