//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TrustedPeersHelperEgoPeerStatus : NSObject <NSSecureCoding>
{
    _Bool _isExcluded;	// 8 = 0x8
    _Bool _isLocked;	// 9 = 0x9
    unsigned long long _egoStatus;	// 16 = 0x10
    NSString *_egoPeerID;	// 24 = 0x18
    unsigned long long _numberOfPeersInOctagon;	// 32 = 0x20
    NSDictionary *_viablePeerCountsByModelID;	// 40 = 0x28
    NSDictionary *_peerCountsByMachineID;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100174610
- (void).cxx_destruct;	// IMP=0x00000001001745d4
@property _Bool isLocked; // @synthesize isLocked=_isLocked;
@property _Bool isExcluded; // @synthesize isExcluded=_isExcluded;
@property(retain) NSDictionary *peerCountsByMachineID; // @synthesize peerCountsByMachineID=_peerCountsByMachineID;
@property(retain) NSDictionary *viablePeerCountsByModelID; // @synthesize viablePeerCountsByModelID=_viablePeerCountsByModelID;
@property unsigned long long numberOfPeersInOctagon; // @synthesize numberOfPeersInOctagon=_numberOfPeersInOctagon;
@property(retain) NSString *egoPeerID; // @synthesize egoPeerID=_egoPeerID;
@property unsigned long long egoStatus; // @synthesize egoStatus=_egoStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001743d8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100174048
- (id)description;	// IMP=0x0000000100173fd4
- (id)initWithEgoPeerID:(id)arg1 status:(unsigned long long)arg2 viablePeerCountsByModelID:(id)arg3 peerCountsByMachineID:(id)arg4 isExcluded:(_Bool)arg5 isLocked:(_Bool)arg6;	// IMP=0x0000000100173dd4

@end

