//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDWebServiceConnectionTask.h"

@class NSString;

@interface PDRegistrationTask : PDWebServiceConnectionTask
{
    NSString *_serialNumber;	// 16 = 0x10
    NSString *_authenticationToken;	// 24 = 0x18
    unsigned long long _requestedStatus;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001797d8
+ (id)_taskWithWebService:(id)arg1 serialNumber:(id)arg2 authToken:(id)arg3 requestedStatus:(unsigned long long)arg4;	// IMP=0x0000000100179634
+ (id)unregisterTaskWithWebService:(id)arg1 serialNumber:(id)arg2 authToken:(id)arg3;	// IMP=0x00000001001795b0
+ (id)registerTaskWithWebService:(id)arg1 serialNumber:(id)arg2 authToken:(id)arg3;	// IMP=0x000000010017952c
- (void).cxx_destruct;	// IMP=0x000000010017a77c
@property(nonatomic) unsigned long long requestedStatus; // @synthesize requestedStatus=_requestedStatus;
@property(retain, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (_Bool)_matchesRegistrationTask:(id)arg1;	// IMP=0x000000010017a544
- (_Bool)_matchesPersonalizePassTask:(id)arg1;	// IMP=0x000000010017a374
- (long long)actionForActiveTask:(id)arg1;	// IMP=0x000000010017a288
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x000000010017a1d4
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x000000010017a168
- (id)description;	// IMP=0x0000000100179ffc
- (void)handleError:(id)arg1;	// IMP=0x0000000100179fc8
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x0000000100179e58
- (id)bodyDictionary;	// IMP=0x0000000100179da0
- (id)headerFields;	// IMP=0x0000000100179cf8
- (id)endpointComponents;	// IMP=0x0000000100179bb0
- (id)method;	// IMP=0x0000000100179b7c
- (_Bool)pertainsToPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x0000000100179a9c
- (_Bool)isValid;	// IMP=0x00000001001799cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001798fc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001797e0
- (id)initWithWebService:(id)arg1 serialNumber:(id)arg2 authToken:(id)arg3 requestedStatus:(unsigned long long)arg4;	// IMP=0x00000001001796d4

@end

