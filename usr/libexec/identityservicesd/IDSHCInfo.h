//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSHCInfo : NSObject
{
    long long _state;	// 8 = 0x8
    unsigned short _localCID;	// 16 = 0x10
    unsigned short _remoteCID;	// 18 = 0x12
    unsigned short _reqCount;	// 20 = 0x14
    unsigned int _lastSentSeq;	// 24 = 0x18
    unsigned int _lastSentAck;	// 28 = 0x1c
    void *_localContext;	// 32 = 0x20
    void *_remoteContext;	// 40 = 0x28
}

@property(nonatomic) unsigned int lastSentAck; // @synthesize lastSentAck=_lastSentAck;
@property(nonatomic) unsigned int lastSentSeq; // @synthesize lastSentSeq=_lastSentSeq;
@property(nonatomic) unsigned short remoteCID; // @synthesize remoteCID=_remoteCID;
@property(nonatomic) unsigned short localCID; // @synthesize localCID=_localCID;
@property(nonatomic) unsigned short reqCount; // @synthesize reqCount=_reqCount;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void *)remoteContext;	// IMP=0x0000000100285be4
- (void *)localContext;	// IMP=0x0000000100285bc8
- (void)setRemoteContext:(void *)arg1;	// IMP=0x00000001002859e8
- (void)setLocalContext:(void *)arg1;	// IMP=0x0000000100285808
- (void)invalidate;	// IMP=0x000000010028556c

@end

