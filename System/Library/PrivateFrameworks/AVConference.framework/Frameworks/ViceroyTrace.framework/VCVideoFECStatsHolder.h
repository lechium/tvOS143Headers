/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VCVideoFECStatsHolder : NSObject {

	unsigned long long _totalFECDataByteCount;
	unsigned long long _totalFECParityByteCount;
	unsigned _totalFECFrameCount;
	unsigned _completeFECFrameCount;
	unsigned _failedFECFrameCount;
	unsigned _unfixableFECFrameCount;

}

@property (assign) unsigned long long totalFECDataByteCount;                //@synthesize totalFECDataByteCount=_totalFECDataByteCount - In the implementation block
@property (assign) unsigned long long totalFECParityByteCount;              //@synthesize totalFECParityByteCount=_totalFECParityByteCount - In the implementation block
@property (assign) unsigned totalFECFrameCount;                             //@synthesize totalFECFrameCount=_totalFECFrameCount - In the implementation block
@property (assign) unsigned completeFECFrameCount;                          //@synthesize completeFECFrameCount=_completeFECFrameCount - In the implementation block
@property (assign) unsigned failedFECFrameCount;                            //@synthesize failedFECFrameCount=_failedFECFrameCount - In the implementation block
@property (assign) unsigned unfixableFECFrameCount;                         //@synthesize unfixableFECFrameCount=_unfixableFECFrameCount - In the implementation block
-(void)merge:(id)arg1 ;
-(unsigned long long)totalFECDataByteCount;
-(unsigned long long)totalFECParityByteCount;
-(unsigned)totalFECFrameCount;
-(unsigned)completeFECFrameCount;
-(unsigned)unfixableFECFrameCount;
-(unsigned)failedFECFrameCount;
-(void)setTotalFECDataByteCount:(unsigned long long)arg1 ;
-(void)setTotalFECParityByteCount:(unsigned long long)arg1 ;
-(void)setTotalFECFrameCount:(unsigned)arg1 ;
-(void)setCompleteFECFrameCount:(unsigned)arg1 ;
-(void)setUnfixableFECFrameCount:(unsigned)arg1 ;
-(void)setFailedFECFrameCount:(unsigned)arg1 ;
@end

