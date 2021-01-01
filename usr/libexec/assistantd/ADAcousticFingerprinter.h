//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol ADAcousticFingerprinterDelegate, OS_dispatch_queue;

@interface ADAcousticFingerprinter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_asxConnection;	// 16 = 0x10
    id <ADAcousticFingerprinterDelegate> _delegate;	// 24 = 0x18
    unsigned long long _totalSampleCount;	// 32 = 0x20
    unsigned long long _nextFingerprintSampleNumber;	// 40 = 0x28
    struct AudioStreamBasicDescription _sourceASBD;	// 48 = 0x30
    double _interval;	// 88 = 0x58
    struct OpaqueAudioConverter *_fingerprinterConverter;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000f7a24
@property(nonatomic) __weak id <ADAcousticFingerprinterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reset;	// IMP=0x00000001000f7934
- (void)flush;	// IMP=0x00000001000f7708
- (void)appendPCMData:(id)arg1;	// IMP=0x00000001000f7350
- (id)_convertPCMDataForFingerprinting:(id)arg1;	// IMP=0x00000001000f7138
- (_Bool)_needsConversion;	// IMP=0x00000001000f7114
- (void)_configureWithCurrentASBD;	// IMP=0x00000001000f6e8c
- (void)setASBD:(struct AudioStreamBasicDescription *)arg1;	// IMP=0x00000001000f6e68
- (void)setFingerprintInterval:(double)arg1;	// IMP=0x00000001000f6e00
- (unsigned long long)_samplesPerInterval;	// IMP=0x00000001000f6dec
- (id)_serviceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f6d6c
- (id)_service;	// IMP=0x00000001000f6d18
- (void)_cleanUpConnection;	// IMP=0x00000001000f6cc0
- (void)_connectionInvalidated;	// IMP=0x00000001000f6c08
- (void)_connectionInterrupted;	// IMP=0x00000001000f6b50
- (id)_connection;	// IMP=0x00000001000f691c
- (void)dealloc;	// IMP=0x00000001000f68c0
- (id)init;	// IMP=0x00000001000f6824

@end

