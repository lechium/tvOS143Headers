//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EscrowPasswordAuthenticatedRequest.h"

@class EscrowPrerecord;

@interface EscrowEnrollmentRequest : EscrowPasswordAuthenticatedRequest
{
    EscrowPrerecord *_prerecord;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000100019f58
@property(retain, nonatomic) EscrowPrerecord *prerecord; // @synthesize prerecord=_prerecord;
- (id)bodyDictionary;	// IMP=0x0000000100019abc
- (id)validateInput;	// IMP=0x00000001000197b4
- (id)command;	// IMP=0x00000001000197a8
- (Class)responseClass;	// IMP=0x000000010001979c
- (id)initWithRequest:(id)arg1;	// IMP=0x00000001000196f8

@end

