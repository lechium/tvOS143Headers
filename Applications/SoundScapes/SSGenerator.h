//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioEngine, AVAudioFile, AVAudioPCMBuffer, AVAudioPlayerNode, NSArray, NSMutableDictionary;

@interface SSGenerator : NSObject
{
    int _currentPlayerBus;	// 8 = 0x8
    _Bool _decreaseIntensity;	// 12 = 0xc
    unsigned long long _minimumTimePerIntensityInSecs;	// 16 = 0x10
    unsigned int _scheduledCurrentPlayerCount;	// 24 = 0x18
    unsigned int _scheduledNextPlayerCount;	// 28 = 0x1c
    long long _framesAlreadyWritten;	// 32 = 0x20
    unsigned int _numberOfFrames;	// 40 = 0x28
    struct opaqueCMFormatDescription *_cmFormat;	// 48 = 0x30
    float _startupDelayInSec;	// 56 = 0x38
    float _fadePeriodInSec;	// 60 = 0x3c
    NSArray *_audioFileDirURLS;	// 64 = 0x40
    NSMutableDictionary *_cachedPlayerFiles;	// 72 = 0x48
    AVAudioEngine *_offLineEngine;	// 80 = 0x50
    AVAudioPlayerNode *_currentPlayer;	// 88 = 0x58
    AVAudioFile *_currentPlayerFile;	// 96 = 0x60
    long long _currentPlayerStart;	// 104 = 0x68
    AVAudioPlayerNode *_nextPlayer;	// 112 = 0x70
    AVAudioFile *_nextPlayerFile;	// 120 = 0x78
    long long _nextPlayerStart;	// 128 = 0x80
    AVAudioPCMBuffer *_buffer;	// 136 = 0x88
    long long _switchFilesAtTime;	// 144 = 0x90
    unsigned long long _currentIntensityIndex;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000100005ec0
@property(nonatomic) float fadePeriodInSec; // @synthesize fadePeriodInSec=_fadePeriodInSec;
@property(nonatomic) float startupDelayInSec; // @synthesize startupDelayInSec=_startupDelayInSec;
@property unsigned long long currentIntensityIndex; // @synthesize currentIntensityIndex=_currentIntensityIndex;
@property(readonly, nonatomic) long long switchFilesAtTime; // @synthesize switchFilesAtTime=_switchFilesAtTime;
@property(retain) AVAudioPCMBuffer *buffer; // @synthesize buffer=_buffer;
@property(readonly) long long nextPlayerStart; // @synthesize nextPlayerStart=_nextPlayerStart;
@property(retain) AVAudioFile *nextPlayerFile; // @synthesize nextPlayerFile=_nextPlayerFile;
@property(retain) AVAudioPlayerNode *nextPlayer; // @synthesize nextPlayer=_nextPlayer;
@property(readonly) long long currentPlayerStart; // @synthesize currentPlayerStart=_currentPlayerStart;
@property(retain) AVAudioFile *currentPlayerFile; // @synthesize currentPlayerFile=_currentPlayerFile;
@property(retain) AVAudioPlayerNode *currentPlayer; // @synthesize currentPlayer=_currentPlayer;
@property(retain) AVAudioEngine *offLineEngine; // @synthesize offLineEngine=_offLineEngine;
@property(retain) NSMutableDictionary *cachedPlayerFiles; // @synthesize cachedPlayerFiles=_cachedPlayerFiles;
@property(retain) NSArray *audioFileDirURLS; // @synthesize audioFileDirURLS=_audioFileDirURLS;
- (void)setNextSampleBufferTimestamp:(CDStruct_198678f7)arg1;	// IMP=0x0000000100005d40
- (struct opaqueCMSampleBuffer *)getNextSampleBuffer;	// IMP=0x0000000100005904
- (void)doGainsAndMixingLogic;	// IMP=0x00000001000052e4
- (_Bool)didUpdateIntensities;	// IMP=0x00000001000051fc
- (_Bool)startAudioEngine;	// IMP=0x0000000100004afc
- (void)addDelayIfApplicable;	// IMP=0x00000001000049dc
@property(readonly, nonatomic) unsigned int switchFileInFrames;
@property(readonly, nonatomic) unsigned int fadePeriodInFrames;
@property(readonly, nonatomic) unsigned int startupDelayInFrames;
- (id)getNextTrack;	// IMP=0x00000001000046ac
- (id)getNextURL;	// IMP=0x00000001000043bc
- (void)updateNextIntensityIndex;	// IMP=0x000000010000429c
- (void)dealloc;	// IMP=0x00000001000041ec
- (id)initWithFormat:(id)arg1 framesPerRender:(unsigned int)arg2 filesDir:(id)arg3 fadeDuration:(float)arg4;	// IMP=0x0000000100003d44

@end

