/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, SignpostEvent;

@interface SignpostCAInstrumentationProcessor : NSObject {

	BOOL _isConciseFormat;
	unsigned _curFrameSeed;
	/*^block*/id _commitIntervalBlock;
	/*^block*/id _transactionLifetimeBlock;
	/*^block*/id _frameLatencyBlock;
	/*^block*/id _hidLatencyBlock;
	/*^block*/id _renderBlock;
	/*^block*/id _frameLifetimeBlock;
	/*^block*/id _contextInfoBlock;
	NSMutableDictionary* _frameSeedToAccumulatedStateDict;
	SignpostEvent* _curLongFrameLifetimeBegin;
	SignpostEvent* _curFrameLifetimeBegin;

}

@property (nonatomic,readonly) NSMutableDictionary * frameSeedToAccumulatedStateDict;              //@synthesize frameSeedToAccumulatedStateDict=_frameSeedToAccumulatedStateDict - In the implementation block
@property (nonatomic,retain) SignpostEvent * curLongFrameLifetimeBegin;                            //@synthesize curLongFrameLifetimeBegin=_curLongFrameLifetimeBegin - In the implementation block
@property (nonatomic,retain) SignpostEvent * curFrameLifetimeBegin;                                //@synthesize curFrameLifetimeBegin=_curFrameLifetimeBegin - In the implementation block
@property (assign,nonatomic) unsigned curFrameSeed;                                                //@synthesize curFrameSeed=_curFrameSeed - In the implementation block
@property (assign,nonatomic) BOOL isConciseFormat;                                                 //@synthesize isConciseFormat=_isConciseFormat - In the implementation block
@property (nonatomic,copy) id commitIntervalBlock;                                                 //@synthesize commitIntervalBlock=_commitIntervalBlock - In the implementation block
@property (nonatomic,copy) id transactionLifetimeBlock;                                            //@synthesize transactionLifetimeBlock=_transactionLifetimeBlock - In the implementation block
@property (nonatomic,copy) id frameLatencyBlock;                                                   //@synthesize frameLatencyBlock=_frameLatencyBlock - In the implementation block
@property (nonatomic,copy) id hidLatencyBlock;                                                     //@synthesize hidLatencyBlock=_hidLatencyBlock - In the implementation block
@property (nonatomic,copy) id renderBlock;                                                         //@synthesize renderBlock=_renderBlock - In the implementation block
@property (nonatomic,copy) id frameLifetimeBlock;                                                  //@synthesize frameLifetimeBlock=_frameLifetimeBlock - In the implementation block
@property (nonatomic,copy) id contextInfoBlock;                                                    //@synthesize contextInfoBlock=_contextInfoBlock - In the implementation block
+(void)addNeededSCToWhitelist:(id)arg1 ;
+(BOOL)filterPassesRequiredSCForCAInstrumentation:(id)arg1 ;
-(id)init;
-(id)renderBlock;
-(NSMutableDictionary *)frameSeedToAccumulatedStateDict;
-(void)setCurFrameSeed:(unsigned)arg1 ;
-(unsigned)curFrameSeed;
-(id)_stateForFrameSeed:(unsigned)arg1 ;
-(void)_cleanupStateWithSeed:(unsigned)arg1 ;
-(void)setCurLongFrameLifetimeBegin:(SignpostEvent *)arg1 ;
-(SignpostEvent *)curLongFrameLifetimeBegin;
-(void)setCurFrameLifetimeBegin:(SignpostEvent *)arg1 ;
-(void)_handleFrameLifetimeBegin:(id)arg1 ;
-(void)_handleLongFrameLifetimeBegin:(id)arg1 ;
-(BOOL)isConciseFormat;
-(void)setIsConciseFormat:(BOOL)arg1 ;
-(id)transactionLifetimeBlock;
-(id)commitIntervalBlock;
-(void)_handleHIDInterval:(id)arg1 ;
-(id)hidLatencyBlock;
-(void)_handleRenderInterval:(id)arg1 ;
-(void)_handleFrameLatencyInterval:(id)arg1 ;
-(id)frameLatencyBlock;
-(void)_handleFrameLifetimeInterval:(id)arg1 isLong:(BOOL)arg2 ;
-(id)frameLifetimeBlock;
-(void)_handleContextInfo:(id)arg1 ;
-(BOOL)handleSignpostInterval:(id)arg1 ;
-(void)handleSignpostIntervalBegin:(id)arg1 ;
-(BOOL)handleSignpostEvent:(id)arg1 ;
-(void)handleDeviceReboot;
-(id)newConfiguredExtractor;
-(void)setCommitIntervalBlock:(id)arg1 ;
-(void)setTransactionLifetimeBlock:(id)arg1 ;
-(void)setFrameLatencyBlock:(id)arg1 ;
-(void)setHidLatencyBlock:(id)arg1 ;
-(void)setRenderBlock:(id)arg1 ;
-(void)setFrameLifetimeBlock:(id)arg1 ;
-(id)contextInfoBlock;
-(void)setContextInfoBlock:(id)arg1 ;
-(SignpostEvent *)curFrameLifetimeBegin;
@end

