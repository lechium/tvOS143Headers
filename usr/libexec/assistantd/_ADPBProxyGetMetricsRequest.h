//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@interface _ADPBProxyGetMetricsRequest : PBRequest <NSCopying>
{
}

+ (unsigned short)_ADPBProxyRequestType;	// IMP=0x000000010010f478
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010008dd6c
- (unsigned long long)hash;	// IMP=0x000000010008dd64
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008dd10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010008dcd8
- (void)copyTo:(id)arg1;	// IMP=0x000000010008dcd4
- (Class)responseClass;	// IMP=0x000000010008dcc8
- (unsigned int)requestTypeCode;	// IMP=0x000000010008dcc0
- (void)writeTo:(id)arg1;	// IMP=0x000000010008dcbc
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010008dcb4
- (id)dictionaryRepresentation;	// IMP=0x000000010008db58
- (id)description;	// IMP=0x000000010008daa4
- (void)_ad_performWithPeerStreamConnection:(id)arg1 context:(id)arg2;	// IMP=0x000000010005ba08

@end
