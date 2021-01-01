//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAudioFileWriter-Protocol.h"

@class NSArray, NSString, NSURL;

@interface CSSelectiveChannelAudioFileWriter : NSObject <CSAudioFileWriter>
{
    _Bool isWriting;	// 8 = 0x8
    struct OpaqueExtAudioFile *fFile;	// 16 = 0x10
    struct AudioStreamBasicDescription inASBD;	// 24 = 0x18
    struct AudioStreamBasicDescription outASBD;	// 64 = 0x40
    NSArray *selectedChannelList;	// 104 = 0x68
    unsigned int _numberOfChannels;	// 112 = 0x70
    NSURL *_fileURL;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001000dc38c
@property(readonly, nonatomic) unsigned int numberOfChannels; // @synthesize numberOfChannels=_numberOfChannels;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (_Bool)addSamples:(const void *)arg1 numSamples:(long long)arg2;	// IMP=0x00000001000dc134
- (_Bool)endAudio;	// IMP=0x00000001000dc104
- (void)dealloc;	// IMP=0x00000001000dc0b8
- (id)initWithURL:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3 channelBitset:(unsigned long long)arg4;	// IMP=0x00000001000dbe0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
