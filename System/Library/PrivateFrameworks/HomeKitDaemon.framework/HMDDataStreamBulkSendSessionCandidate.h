/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMDDataStreamBulkSendSessionCandidate.h>

@protocol HMDDataStreamBulkSendSessionCandidate
@required
-(void)rejectBulkSendSessionWithStatus:(unsigned short)arg1;
-(void)acceptBulkSendSessionOnQueue:(id)arg1 callback:(/*^block*/id)arg2;

@end


@class HMDDataStreamBulkSendProtocol, NSDictionary, NSMutableArray, NSError;

@interface HMDDataStreamBulkSendSessionCandidate : NSObject <HMDDataStreamBulkSendSessionCandidate> {

	HMDDataStreamBulkSendProtocol* _bulkSendProtocol;
	NSDictionary* _requestHeader;
	NSMutableArray* _pendingReads;
	NSError* _receivedFailure;

}

@property (nonatomic,__weak,readonly) HMDDataStreamBulkSendProtocol * bulkSendProtocol;              //@synthesize bulkSendProtocol=_bulkSendProtocol - In the implementation block
@property (nonatomic,readonly) NSDictionary * requestHeader;                                         //@synthesize requestHeader=_requestHeader - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingReads;                                          //@synthesize pendingReads=_pendingReads - In the implementation block
@property (nonatomic,retain) NSError * receivedFailure;                                              //@synthesize receivedFailure=_receivedFailure - In the implementation block
-(NSDictionary *)requestHeader;
-(void)rejectBulkSendSessionWithStatus:(unsigned short)arg1 ;
-(NSMutableArray *)pendingReads;
-(void)setPendingReads:(NSMutableArray *)arg1 ;
-(void)acceptBulkSendSessionOnQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithProtocol:(id)arg1 requestHeader:(id)arg2 ;
-(NSError *)receivedFailure;
-(HMDDataStreamBulkSendProtocol *)bulkSendProtocol;
-(void)setReceivedFailure:(NSError *)arg1 ;
@end

