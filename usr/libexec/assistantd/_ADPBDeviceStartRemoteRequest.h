//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class AFRequestInfo, NSData, NSString;

@interface _ADPBDeviceStartRemoteRequest : PBRequest <NSCopying>
{
    NSData *_handoffData;	// 8 = 0x8
    NSString *_handoffNotification;	// 16 = 0x10
    NSString *_handoffOriginDeviceName;	// 24 = 0x18
    NSString *_handoffUrlString;	// 32 = 0x20
    NSString *_text;	// 40 = 0x28
    _Bool _requiresUserInteraction;	// 48 = 0x30
    struct {
        unsigned int requiresUserInteraction:1;
    } _has;	// 52 = 0x34
}

+ (unsigned short)_ADPBDeviceRequestType;	// IMP=0x000000010008de00
- (void).cxx_destruct;	// IMP=0x00000001001a8f50
@property(retain, nonatomic) NSString *handoffOriginDeviceName; // @synthesize handoffOriginDeviceName=_handoffOriginDeviceName;
@property(retain, nonatomic) NSString *handoffNotification; // @synthesize handoffNotification=_handoffNotification;
@property(nonatomic) _Bool requiresUserInteraction; // @synthesize requiresUserInteraction=_requiresUserInteraction;
@property(retain, nonatomic) NSString *handoffUrlString; // @synthesize handoffUrlString=_handoffUrlString;
@property(retain, nonatomic) NSData *handoffData; // @synthesize handoffData=_handoffData;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001a8d94
- (unsigned long long)hash;	// IMP=0x00000001001a8cbc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001a8b24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001a89d0
- (void)copyTo:(id)arg1;	// IMP=0x00000001001a88d8
- (void)writeTo:(id)arg1;	// IMP=0x00000001001a87f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001a87f0
- (id)dictionaryRepresentation;	// IMP=0x00000001001a83a8
- (id)description;	// IMP=0x00000001001a82f4
@property(readonly, nonatomic) _Bool hasHandoffOriginDeviceName;
@property(readonly, nonatomic) _Bool hasHandoffNotification;
@property(nonatomic) _Bool hasRequiresUserInteraction;
@property(readonly, nonatomic) _Bool hasHandoffUrlString;
@property(readonly, nonatomic) _Bool hasHandoffData;
@property(readonly, nonatomic) _Bool hasText;
- (void)_ad_performWithSharedDataRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000aa664
- (void)_ad_performWithCloudService:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001202b8
@property(copy, nonatomic, setter=_ad_setRequestInfo:) AFRequestInfo *_ad_requestInfo;

@end

