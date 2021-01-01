//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface ACCUserNotification : NSObject
{
    _Bool _isModal;	// 8 = 0x8
    _Bool _dismissOnUnlock;	// 9 = 0x9
    _Bool _ignoreQuietMode;	// 10 = 0xa
    int _type;	// 12 = 0xc
    NSString *_uuid;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_message;	// 32 = 0x20
    NSString *_defaultButtonName;	// 40 = 0x28
    NSString *_otherButtonName;	// 48 = 0x30
    NSURL *_iconURL;	// 56 = 0x38
    NSNumber *_systemSoundID;	// 64 = 0x40
    double _timeout;	// 72 = 0x48
    NSString *_identifier;	// 80 = 0x50
    NSString *_groupIdentifier;	// 88 = 0x58
    NSDictionary *_userNotificationCFDict;	// 96 = 0x60
    struct __CFUserNotification *_userNotificationCF;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000001000f233c
@property(nonatomic) struct __CFUserNotification *userNotificationCF; // @synthesize userNotificationCF=_userNotificationCF;
@property(retain, nonatomic) NSDictionary *userNotificationCFDict; // @synthesize userNotificationCFDict=_userNotificationCFDict;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSNumber *systemSoundID; // @synthesize systemSoundID=_systemSoundID;
@property(nonatomic) _Bool ignoreQuietMode; // @synthesize ignoreQuietMode=_ignoreQuietMode;
@property(nonatomic) _Bool dismissOnUnlock; // @synthesize dismissOnUnlock=_dismissOnUnlock;
@property(nonatomic) _Bool isModal; // @synthesize isModal=_isModal;
@property(copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *otherButtonName; // @synthesize otherButtonName=_otherButtonName;
@property(copy, nonatomic) NSString *defaultButtonName; // @synthesize defaultButtonName=_defaultButtonName;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)createBackingUserNotification;	// IMP=0x00000001000f1f08
- (id)init;	// IMP=0x00000001000f1e04

@end

