//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface ICDCloudPushNotificationAccountRegistrationState : NSObject
{
    NSData *_APNSToken;	// 8 = 0x8
    NSArray *_mediaKinds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000c7474
@property(retain, nonatomic) NSArray *mediaKinds; // @synthesize mediaKinds=_mediaKinds;
@property(retain, nonatomic) NSData *APNSToken; // @synthesize APNSToken=_APNSToken;
- (id)dictionaryRepresentation;	// IMP=0x00000001000c73c4
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000001000c7318

@end
