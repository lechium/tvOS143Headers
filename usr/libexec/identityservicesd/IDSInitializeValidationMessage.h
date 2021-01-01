//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSBaseMessage.h>

#import "NSCopying-Protocol.h"

@class NSData, NSNumber, NSString;

@interface IDSInitializeValidationMessage : IDSBaseMessage <NSCopying>
{
    NSData *_sessionInfoRequest;	// 232 = 0xe8
    NSData *_responseSessionInfo;	// 240 = 0xf0
    NSNumber *_responseTTL;	// 248 = 0xf8
    NSData *_pushToken;	// 256 = 0x100
    NSString *_absintheUDID;	// 264 = 0x108
    NSData *_absintheHello;	// 272 = 0x110
    NSData *_responseAbsintheServKey;	// 280 = 0x118
    NSData *_responseAbsintheResponse;	// 288 = 0x120
    NSString *_responseDeviceScoreNonce;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x00000001005f85c0
@property(copy, nonatomic) NSString *responseDeviceScoreNonce; // @synthesize responseDeviceScoreNonce=_responseDeviceScoreNonce;
@property(copy, nonatomic) NSData *responseAbsintheResponse; // @synthesize responseAbsintheResponse=_responseAbsintheResponse;
@property(copy, nonatomic) NSData *responseAbsintheServKey; // @synthesize responseAbsintheServKey=_responseAbsintheServKey;
@property(copy, nonatomic) NSData *absintheHello; // @synthesize absintheHello=_absintheHello;
@property(copy, nonatomic) NSString *absintheUDID; // @synthesize absintheUDID=_absintheUDID;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSNumber *responseTTL; // @synthesize responseTTL=_responseTTL;
@property(copy, nonatomic) NSData *responseSessionInfo; // @synthesize responseSessionInfo=_responseSessionInfo;
@property(copy, nonatomic) NSData *sessionInfoRequest; // @synthesize sessionInfoRequest=_sessionInfoRequest;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00000001005f7f98
- (_Bool)requiresPushTokenKeys;	// IMP=0x00000001005f7f78
- (id)additionalMessageHeaders;	// IMP=0x00000001005f7d9c
- (id)messageBody;	// IMP=0x00000001005f7b78
- (id)requiredKeys;	// IMP=0x00000001005f7af0
- (id)bagKey;	// IMP=0x00000001005f7ad4
- (long long)responseCommand;	// IMP=0x00000001005f7abc
- (long long)command;	// IMP=0x00000001005f7aa4
- (double)anisetteHeadersTimeout;	// IMP=0x00000001005f7a8c
- (_Bool)wantsBinaryPush;	// IMP=0x00000001005f7a6c
- (_Bool)wantsCompressedBody;	// IMP=0x00000001005f7a4c
- (_Bool)wantsHTTPHeaders;	// IMP=0x00000001005f7a2c
- (_Bool)wantsBagKey;	// IMP=0x00000001005f7a0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001005f76ac
- (id)init;	// IMP=0x00000001005f7538

@end

