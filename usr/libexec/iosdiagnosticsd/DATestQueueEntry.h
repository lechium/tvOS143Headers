//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DKDiagnosticAttributes, DKDiagnosticParameters;

@interface DATestQueueEntry : NSObject
{
    DKDiagnosticAttributes *_attributes;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    DKDiagnosticParameters *_parameters;	// 24 = 0x18
}

+ (id)queueEntryWithAttributes:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012d8c
- (void).cxx_destruct;	// IMP=0x00000001000130e0
@property(readonly, nonatomic) DKDiagnosticParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) DKDiagnosticAttributes *attributes; // @synthesize attributes=_attributes;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001304c
- (_Bool)isEqualToTestQueueEntry:(id)arg1;	// IMP=0x0000000100012f64
- (unsigned long long)hash;	// IMP=0x0000000100012ef0
- (id)initWithAttributes:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012e1c

@end

