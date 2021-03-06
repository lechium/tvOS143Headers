//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface CSAudioRecordDeviceInfo : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isRemoteDevice;	// 8 = 0x8
    NSString *_route;	// 16 = 0x10
    NSUUID *_remoteDeviceUID;	// 24 = 0x18
    NSString *_remoteDeviceProductIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010007c980
- (void).cxx_destruct;	// IMP=0x000000010007cccc
@property(readonly, copy, nonatomic) NSString *remoteDeviceProductIdentifier; // @synthesize remoteDeviceProductIdentifier=_remoteDeviceProductIdentifier;
@property(readonly, copy, nonatomic) NSUUID *remoteDeviceUID; // @synthesize remoteDeviceUID=_remoteDeviceUID;
@property(readonly, nonatomic) _Bool isRemoteDevice; // @synthesize isRemoteDevice=_isRemoteDevice;
@property(readonly, copy, nonatomic) NSString *route; // @synthesize route=_route;
- (id)initWithAVVCRecordDeviceInfo:(id)arg1;	// IMP=0x000000010007cbb8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010007ca50
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010007c988
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010007c97c
- (id)description;	// IMP=0x000000010007c8d8
- (id)xpcObject;	// IMP=0x000000010007c7a0
- (id)initWithXPCObject:(id)arg1;	// IMP=0x000000010007c5e0
- (id)initWithRoute:(id)arg1 isRemoteDevice:(_Bool)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4;	// IMP=0x000000010007c4dc

@end

