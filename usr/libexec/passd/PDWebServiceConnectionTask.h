//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDNetworkConnectionTask.h"

@class NSString, PDWebService;

@interface PDWebServiceConnectionTask : PDNetworkConnectionTask
{
    PDWebService *_webService;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010017882c
- (void).cxx_destruct;	// IMP=0x0000000100179518
@property(readonly, nonatomic) PDWebService *webService; // @synthesize webService=_webService;
- (id)teamIdentifier;	// IMP=0x00000001001794b4
@property(readonly, nonatomic) NSString *passTypeIdentifier;
- (id)bodyDictionary;	// IMP=0x0000000100179458
- (id)headerFields;	// IMP=0x0000000100179450
- (id)queryFields;	// IMP=0x0000000100179448
- (id)endpointComponents;	// IMP=0x0000000100179440
- (id)method;	// IMP=0x0000000100179438
- (void)reportMalformedResponseError:(id)arg1;	// IMP=0x00000001001793e4
- (void)reportNSURLConnectionError:(id)arg1;	// IMP=0x0000000100179390
- (void)reportUnexpectedResponseCode:(long long)arg1;	// IMP=0x000000010017932c
- (void)reportAuthenticationFailure;	// IMP=0x00000001001792d4
- (id)request;	// IMP=0x0000000100178968
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001788e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100178834
- (id)initWithWebService:(id)arg1;	// IMP=0x00000001001787ac

@end
