//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXIndexMap, NSString, VOTEventUserCommandContext, VOTKeyInfo;

@interface VOTEvent : NSObject
{
    double _time;	// 8 = 0x8
    long long _origin;	// 16 = 0x10
    NSString *_command;	// 24 = 0x18
    AXIndexMap *_info;	// 32 = 0x20
    struct CGPoint _touchPoint;	// 40 = 0x28
    struct CGPoint _touchRawLocation;	// 56 = 0x38
    double _touchVelocity;	// 72 = 0x48
    unsigned long long _fingerCount;	// 80 = 0x50
    _Bool _bypassHelp;	// 88 = 0x58
    _Bool _isGuideElementMovementEvent;	// 89 = 0x59
    double _touchForce;	// 96 = 0x60
    CDUnknownBlockType _completedHandlingBlock;	// 104 = 0x68
    VOTEventUserCommandContext *_userCommandContext;	// 112 = 0x70
}

+ (id)brailleEventWithCommand:(id)arg1 info:(id)arg2;	// IMP=0x00000001000177d8
+ (id)appleTVRemoteEventWithCommand:(id)arg1 info:(id)arg2;	// IMP=0x0000000100017740
+ (id)systemServerEventWithCommand:(id)arg1 info:(id)arg2;	// IMP=0x00000001000176a8
+ (id)internalEventWithCommand:(id)arg1 info:(id)arg2;	// IMP=0x0000000100017610
+ (id)touchEventWithCommand:(id)arg1 info:(id)arg2;	// IMP=0x0000000100017578
+ (id)keyEventWithCommand:(id)arg1 keyInfo:(id)arg2;	// IMP=0x0000000100017518
+ (id)keyEventWithCommand:(id)arg1 keyInfo:(id)arg2 otherInfo:(id)arg3;	// IMP=0x0000000100017454
+ (id)externalDeviceEventWithCommand:(id)arg1 info:(id)arg2;	// IMP=0x00000001000173bc
- (void).cxx_destruct;	// IMP=0x0000000100017ba4
@property(retain, nonatomic) VOTEventUserCommandContext *userCommandContext; // @synthesize userCommandContext=_userCommandContext;
@property(nonatomic) _Bool isGuideElementMovementEvent; // @synthesize isGuideElementMovementEvent=_isGuideElementMovementEvent;
@property(copy, nonatomic) CDUnknownBlockType completedHandlingBlock; // @synthesize completedHandlingBlock=_completedHandlingBlock;
@property(nonatomic) double touchForce; // @synthesize touchForce=_touchForce;
@property(nonatomic) double touchVelocity; // @synthesize touchVelocity=_touchVelocity;
@property(nonatomic) unsigned long long fingerCount; // @synthesize fingerCount=_fingerCount;
@property(nonatomic) struct CGPoint touchRawLocation; // @synthesize touchRawLocation=_touchRawLocation;
@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
@property(nonatomic) long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) long long tvTouchPadRegion;
- (id)description;	// IMP=0x00000001000179f0
@property(nonatomic) _Bool bypassHelp; // @dynamic bypassHelp;
- (id)objectForIndex:(unsigned long long)arg1;	// IMP=0x00000001000179d0
- (void)setObject:(id)arg1 forIndex:(unsigned long long)arg2;	// IMP=0x0000000100017950
- (void)setInfo:(id)arg1;	// IMP=0x00000001000178f8
@property(retain, nonatomic) VOTKeyInfo *keyInfo; // @dynamic keyInfo;
- (_Bool)isAppleTVRemoteEvent;	// IMP=0x00000001000178c8
- (_Bool)isSystemServerEvent;	// IMP=0x00000001000178b8
- (_Bool)isBrailleEvent;	// IMP=0x00000001000178a8
- (_Bool)isExternalDeviceEvent;	// IMP=0x0000000100017898
- (_Bool)isTouchEvent;	// IMP=0x0000000100017888
- (_Bool)isKeyEvent;	// IMP=0x0000000100017878
- (double)time;	// IMP=0x0000000100017870
- (id)initWithType:(long long)arg1;	// IMP=0x0000000100017364

@end
