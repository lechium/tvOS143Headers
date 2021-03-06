//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, iAP2Connection, iAP2EAManager;

@interface iAP2MsgLocation : NSObject
{
    _Bool bLocationStarted;	// 8 = 0x8
    _Bool bNMEAFilterListNew;	// 9 = 0x9
    unsigned int minNMEAIntervalMs;	// 12 = 0xc
    NSLock *pNMEALock;	// 16 = 0x10
    NSMutableArray *pNMEASentArray;	// 24 = 0x18
    NSMutableArray *pNMEAFilterList;	// 32 = 0x20
    iAP2EAManager *pkEAManager;	// 40 = 0x28
    iAP2Connection *pkConnection;	// 48 = 0x30
}

+ (int)stopLocationUpdate:(id)arg1;	// IMP=0x00000001000489b4
+ (int)startLocationUpdate:(id)arg1;	// IMP=0x00000001000486ec
@property _Bool bNMEAFilterListNew; // @synthesize bNMEAFilterListNew;
@property _Bool bLocationStarted; // @synthesize bLocationStarted;
@property unsigned int minNMEAIntervalMs; // @synthesize minNMEAIntervalMs;
@property iAP2Connection *pkConnection; // @synthesize pkConnection;
@property iAP2EAManager *pkEAManager; // @synthesize pkEAManager;
@property(readonly) NSMutableArray *pNMEAFilterList; // @synthesize pNMEAFilterList;
@property NSMutableArray *pNMEASentArray; // @synthesize pNMEASentArray;
@property NSLock *pNMEALock; // @synthesize pNMEALock;
- (void)requestLocationAssist:(id)arg1;	// IMP=0x00000001000493dc
- (id)description;	// IMP=0x0000000100049368
- (void)clearNMEASentences;	// IMP=0x0000000100049320
- (unsigned int)countNMEASentences;	// IMP=0x00000001000492cc
- (id)dequeueNMEASentence;	// IMP=0x000000010004923c
- (void)enqueueNMEASentence:(id)arg1;	// IMP=0x00000001000491dc
- (int)sendGPRMCDataStatusValues:(id)arg1 forConnection:(id)arg2;	// IMP=0x0000000100048fcc
- (void)setNMEAFilterList:(id)arg1;	// IMP=0x0000000100048c00
- (void)shuttingDown;	// IMP=0x0000000100048bd8
- (void)dealloc;	// IMP=0x0000000100048b74
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100048aa0

@end

