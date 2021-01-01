//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDContainer.h"

@class SDArchive, SDLogArchiveUnit;

__attribute__((visibility("hidden")))
@interface SDLogArchiveContainer : SDContainer
{
    SDLogArchiveUnit *_unit;	// 56 = 0x38
    SDArchive *_archive;	// 64 = 0x40
    double _timeout;	// 72 = 0x48
}

+ (id)containerWithName:(id)arg1 destination:(id)arg2 withTimeout:(double)arg3 withTargetArchive:(id)arg4 withDelegate:(id)arg5;	// IMP=0x000000010003f988
- (void).cxx_destruct;	// IMP=0x0000000100041148
@property double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) SDArchive *archive; // @synthesize archive=_archive;
@property(retain, nonatomic) SDLogArchiveUnit *unit; // @synthesize unit=_unit;
- (void)applyContainerOverride:(id)arg1;	// IMP=0x0000000100040e9c
- (_Bool)execute;	// IMP=0x000000010003faa4
- (_Bool)setLogArchiveUnit:(id)arg1;	// IMP=0x000000010003fa84

@end

