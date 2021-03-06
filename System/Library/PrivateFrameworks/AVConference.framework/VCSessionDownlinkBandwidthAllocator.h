/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface VCSessionDownlinkBandwidthAllocator : NSObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _clients;
	NSMutableDictionary* _selectedMediaEntriesForClients;
	NSMutableDictionary* _allocatedMediaEntriesForClients;
	NSMutableArray* _sortedMediaEntries;
	opaqueRTCReportingRef _reportingAgent;
	unsigned _maxConcurrentVideoClients;

}

@property (nonatomic,readonly) unsigned long long simultaneousTalkers; 
-(void)dealloc;
-(void)reset;
-(id)initWithReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(unsigned long long)simultaneousTalkers;
-(void)actualNetworkBitrateVideoDidChangeForClient:(id)arg1 ;
-(void)actualNetworkBitrateAudioDidChangeForClient:(id)arg1 ;
-(id)distributeBitrate:(unsigned)arg1 ;
-(void)registerForBandwidthAllocationWithClient:(id)arg1 ;
-(void)deregisterForBandwidthAllocationWithClient:(id)arg1 ;
-(unsigned)requiredAudioBitrate:(unsigned)arg1 highestAudioBitrates:(id)arg2 ;
-(void)sortMediaEntries;
-(void)updateHighestAudioBitrates:(id)arg1 bitrate:(unsigned)arg2 ;
-(void)updateSelectedMediaEntriesForClientWithUUID:(id)arg1 ;
-(void)reportingSessionParticipantEventBitrateChanged:(id)arg1 optedInNetworkBitrate:(unsigned)arg2 actualNetworkBitrate:(unsigned)arg3 optedInStreamID:(unsigned short)arg4 actualStreamID:(unsigned short)arg5 ;
@end

