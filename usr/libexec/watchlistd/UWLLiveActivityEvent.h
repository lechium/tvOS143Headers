//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString, UWLLiveActivityEventChannel, UWLLiveActivityEventContent;

__attribute__((visibility("hidden")))
@interface UWLLiveActivityEvent : PBCodable <NSCopying>
{
    long long _cleanupTimeEpochMillis;	// 8 = 0x8
    long long _expectedStartTimeEpochMillis;	// 16 = 0x10
    long long _millisecondsSinceEvent;	// 24 = 0x18
    NSString *_bundleId;	// 32 = 0x20
    int _cause;	// 40 = 0x28
    UWLLiveActivityEventChannel *_channel;	// 48 = 0x30
    UWLLiveActivityEventContent *_content;	// 56 = 0x38
    int _contractOrTimed;	// 64 = 0x40
    NSString *_profileId;	// 72 = 0x48
    struct {
        unsigned int cleanupTimeEpochMillis:1;
        unsigned int expectedStartTimeEpochMillis:1;
        unsigned int millisecondsSinceEvent:1;
        unsigned int cause:1;
        unsigned int contractOrTimed:1;
    } _has;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100006194
@property(nonatomic) long long cleanupTimeEpochMillis; // @synthesize cleanupTimeEpochMillis=_cleanupTimeEpochMillis;
@property(nonatomic) long long expectedStartTimeEpochMillis; // @synthesize expectedStartTimeEpochMillis=_expectedStartTimeEpochMillis;
@property(retain, nonatomic) UWLLiveActivityEventContent *content; // @synthesize content=_content;
@property(retain, nonatomic) UWLLiveActivityEventChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *profileId; // @synthesize profileId=_profileId;
@property(nonatomic) long long millisecondsSinceEvent; // @synthesize millisecondsSinceEvent=_millisecondsSinceEvent;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100005f24
- (unsigned long long)hash;	// IMP=0x0000000100005ddc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100005bd4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100005a08
- (void)copyTo:(id)arg1;	// IMP=0x0000000100005888
- (void)writeTo:(id)arg1;	// IMP=0x000000010000572c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100005724
- (id)dictionaryRepresentation;	// IMP=0x0000000100004dbc
- (id)description;	// IMP=0x0000000100004d08
- (int)StringAsContractOrTimed:(id)arg1;	// IMP=0x0000000100004c68
- (id)contractOrTimedAsString:(int)arg1;	// IMP=0x0000000100004bf0
@property(nonatomic) _Bool hasContractOrTimed;
@property(nonatomic) int contractOrTimed; // @synthesize contractOrTimed=_contractOrTimed;
@property(nonatomic) _Bool hasCleanupTimeEpochMillis;
@property(nonatomic) _Bool hasExpectedStartTimeEpochMillis;
- (int)StringAsCause:(id)arg1;	// IMP=0x00000001000049f4
- (id)causeAsString:(int)arg1;	// IMP=0x0000000100004964
@property(nonatomic) _Bool hasCause;
@property(nonatomic) int cause; // @synthesize cause=_cause;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) _Bool hasChannel;
@property(readonly, nonatomic) _Bool hasProfileId;
@property(nonatomic) _Bool hasMillisecondsSinceEvent;
@property(readonly, nonatomic) _Bool hasBundleId;

@end
