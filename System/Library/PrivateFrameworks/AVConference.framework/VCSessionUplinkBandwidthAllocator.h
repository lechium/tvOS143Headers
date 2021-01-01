/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/VCObject.h>

@class VCSessionBandwidthAllocationTable, NSDictionary, NSArray;

@interface VCSessionUplinkBandwidthAllocator : VCObject {

	VCSessionBandwidthAllocationTable* _table;
	NSDictionary* _currentTable;
	BOOL _videoEnabled;
	BOOL _redundancyEnabled;
	BOOL _redundancyEnabledFor720Stream;

}

@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;                                                //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,getter=isRedundancyEnabled,nonatomic) BOOL redundancyEnabled; 
@property (nonatomic,readonly) NSArray * videoStreamIDs; 
@property (nonatomic,readonly) NSArray * videoRepairStreamIDs; 
@property (getter=getBitrateToStreamTable,nonatomic,readonly) NSDictionary * bitrateToStreamTable; 
@property (assign,getter=isRedundancyEnabledFor720Stream,nonatomic) BOOL redundancyEnabledFor720Stream; 
-(id)init;
-(void)dealloc;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(void)_recomputeCurrentTable;
-(id)_audioEntriesForTargetBitrate:(unsigned)arg1 ;
-(id)_videoEntriesForTargetBitrate:(unsigned)arg1 remainingBitrate:(unsigned*)arg2 ;
-(void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(BOOL)arg2 ;
-(void)setRedundancyEnabled:(BOOL)arg1 ;
-(BOOL)isRedundancyEnabled;
-(void)setRedundancyEnabledFor720Stream:(BOOL)arg1 ;
-(BOOL)isRedundancyEnabledFor720Stream;
-(BOOL)peerSubscription:(BOOL)arg1 streamID:(unsigned short)arg2 ;
-(id)audioStreamIDsforTargetBitrate:(unsigned)arg1 ;
-(id)audioRepairStreamIDsforTargetBitrate:(unsigned)arg1 ;
-(id)videoStreamsAndMediaBitratesForTargetNetworkBitrate:(unsigned)arg1 ;
-(id)videoBitratesForTargetNetworkBitrate:(unsigned)arg1 ;
-(NSArray *)videoStreamIDs;
-(NSArray *)videoRepairStreamIDs;
-(id)videoStreamIDsforTargetBitrate:(unsigned)arg1 ;
-(id)videoStreamIDsforTargetBitrateCap:(unsigned)arg1 ;
-(id)videoRepairStreamIDsForStreamIDs;
-(id)audioRepairStreamIDsForStreamIDs;
-(id)getBitrateToStreamTable;
@end
