//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface SDActivityPayloadReplyRecord : NSObject
{
    NSUUID *_messageIdentifier;	// 8 = 0x8
    NSUUID *_requestIdentifier;	// 16 = 0x10
    NSUUID *_activityIdentifier;	// 24 = 0x18
    NSString *_deviceIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010003bee8
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSUUID *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
@property(copy, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(copy, nonatomic) NSUUID *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
- (id)description;	// IMP=0x000000010003bd10

@end

