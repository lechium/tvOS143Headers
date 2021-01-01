/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableArray, NSData, NSArray;

@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest {

	NSMutableArray* _resultChangedNotifications;
	BOOL _wantsChanges;
	BOOL _moreComing;
	unsigned long long _resultsLimit;
	NSData* _resultServerChangeTokenData;
	NSData* _serverChangeTokenData;

}

@property (nonatomic,retain) NSData * serverChangeTokenData;                      //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
@property (nonatomic,retain) NSData * resultServerChangeTokenData;                //@synthesize resultServerChangeTokenData=_resultServerChangeTokenData - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                                     //@synthesize moreComing=_moreComing - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                     //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsChanges;                                   //@synthesize wantsChanges=_wantsChanges - In the implementation block
@property (nonatomic,readonly) NSArray * resultChangedNotifications;              //@synthesize resultChangedNotifications=_resultChangedNotifications - In the implementation block
-(BOOL)moreComing;
-(void)setMoreComing:(BOOL)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setWantsChanges:(BOOL)arg1 ;
-(BOOL)wantsChanges;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(NSArray *)resultChangedNotifications;
-(id)initWithOperation:(id)arg1 serverChangeTokenData:(id)arg2 ;
-(NSData *)resultServerChangeTokenData;
-(void)setResultServerChangeTokenData:(NSData *)arg1 ;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(NSData *)serverChangeTokenData;
@end

