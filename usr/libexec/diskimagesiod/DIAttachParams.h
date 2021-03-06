//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DIBaseParams.h"

@class NSURL;

@interface DIAttachParams : DIBaseParams
{
    _Bool _autoMount;	// 8 = 0x8
    _Bool _handleRefCount;	// 9 = 0x9
    long long _fileMode;	// 16 = 0x10
    unsigned long long _concurrency;	// 24 = 0x18
    unsigned long long _commandSize;	// 32 = 0x20
    unsigned long long _regEntryID;	// 40 = 0x28
    NSURL *_inputMountedOnURL;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000b8dc
- (void).cxx_destruct;	// IMP=0x000000010001b78c
@property(retain, nonatomic) NSURL *inputMountedOnURL; // @synthesize inputMountedOnURL=_inputMountedOnURL;
@property(nonatomic) _Bool handleRefCount; // @synthesize handleRefCount=_handleRefCount;
@property(nonatomic) unsigned long long regEntryID; // @synthesize regEntryID=_regEntryID;
@property(nonatomic) unsigned long long commandSize; // @synthesize commandSize=_commandSize;
@property(nonatomic) unsigned long long concurrency; // @synthesize concurrency=_concurrency;
@property(nonatomic) long long fileMode; // @synthesize fileMode=_fileMode;
@property _Bool autoMount; // @synthesize autoMount=_autoMount;
- (id)newAttachWithError:(id *)arg1;	// IMP=0x000000010001b36c
- (_Bool)reOpenIfWritableWithError:(id *)arg1;	// IMP=0x000000010001aa48
- (id)initWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001a96c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010001a7a0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001a5cc

// Remaining properties
@property(nonatomic) unsigned long long rawBlockSize; // @dynamic rawBlockSize;

@end

