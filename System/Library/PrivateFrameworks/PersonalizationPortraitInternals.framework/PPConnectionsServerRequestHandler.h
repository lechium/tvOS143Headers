/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PPConnectionsServerProtocol.h>

@protocol PPConnectionsClientProtocol;
@class PPXPCServerPipelinedBatchQueryManager, NSString;

@interface PPConnectionsServerRequestHandler : NSObject <PPConnectionsServerProtocol> {

	id<PPConnectionsClientProtocol> _clientProxy;
	PPXPCServerPipelinedBatchQueryManager* _queryManager;
	NSString* _clientProcessName;

}

@property (nonatomic,copy) NSString * clientProcessName;              //@synthesize clientProcessName=_clientProcessName - In the implementation block
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 queryId:(unsigned long long)arg6 ;
-(void)recentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 queryId:(unsigned long long)arg3 ;
-(void)unblockPendingQueries;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(void)setClientProcessName:(NSString *)arg1 ;
-(NSString *)clientProcessName;
@end

