//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ACCAccessoryAuthorizationEntry : NSObject
{
    _Bool _authorized;	// 8 = 0x8
    NSString *_certSerialString;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000e4fbc
@property(nonatomic) _Bool authorized; // @synthesize authorized=_authorized;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *certSerialString; // @synthesize certSerialString=_certSerialString;
- (id)description;	// IMP=0x00000001000e4ea0
- (id)init;	// IMP=0x00000001000e4e3c

@end

