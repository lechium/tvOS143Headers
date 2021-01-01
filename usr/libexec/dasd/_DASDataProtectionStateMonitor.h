//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, _DASDataProtectionMaster;

@interface _DASDataProtectionStateMonitor : NSObject
{
    CDUnknownBlockType _changeHandler;	// 8 = 0x8
    _DASDataProtectionMaster *_master;	// 16 = 0x10
    NSUUID *_handlerUUID;	// 24 = 0x18
}

+ (id)dataProtectionClassD;	// IMP=0x0000000100018678
+ (id)dataProtectionClassC;	// IMP=0x0000000100018668
+ (id)dataProtectionClassA;	// IMP=0x0000000100018658
- (void).cxx_destruct;	// IMP=0x000000010001882c
@property(readonly, nonatomic) NSUUID *handlerUUID; // @synthesize handlerUUID=_handlerUUID;
@property(readonly, nonatomic) _DASDataProtectionMaster *master; // @synthesize master=_master;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (_Bool)unnotifiedIsDataAvailableForClassC;	// IMP=0x0000000100018808
- (_Bool)isDataAvailableFor:(id)arg1;	// IMP=0x00000001000187f8
- (void)dealloc;	// IMP=0x0000000100018714
- (id)init;	// IMP=0x0000000100018688

@end

