/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Radio/RadioRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, SSURLConnectionRequest, NSDictionary, NSString;

@interface RadioSyncRequest : RadioRequest {

	NSObject*<OS_dispatch_queue> _artworkQueue;
	unsigned long long _globalVersion;
	SSURLConnectionRequest* _request;
	NSDictionary* _responseDictionary;
	BOOL _disableArtworkLoading;
	BOOL _includeCleanTracksOnly;
	BOOL _isAutomaticUpdate;
	NSString* _referer;
	NSDictionary* _resultingOverrideBagDictionary;

}

@property (assign,nonatomic) BOOL disableArtworkLoading;                                        //@synthesize disableArtworkLoading=_disableArtworkLoading - In the implementation block
@property (assign,nonatomic) BOOL includeCleanTracksOnly;                                       //@synthesize includeCleanTracksOnly=_includeCleanTracksOnly - In the implementation block
@property (assign,nonatomic) BOOL isAutomaticUpdate;                                            //@synthesize isAutomaticUpdate=_isAutomaticUpdate - In the implementation block
@property (nonatomic,copy) NSString * referer;                                                  //@synthesize referer=_referer - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * resultingOverrideBagDictionary;              //@synthesize resultingOverrideBagDictionary=_resultingOverrideBagDictionary - In the implementation block
-(id)init;
-(void)cancel;
-(id)responseDictionary;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)matchDictionary;
-(void)setIncludeCleanTracksOnly:(BOOL)arg1 ;
-(id)initWithGlobalVersion:(unsigned long long)arg1 ;
-(id)changeList;
-(id)_sortedChangesByType:(id)arg1 ;
-(id)_stationSortOrderForChanges:(id)arg1 ;
-(id)_updateModel:(id)arg1 withChangeDictionary:(id)arg2 changeType:(long long*)arg3 loadArtworkSynchronously:(BOOL)arg4 ;
-(void)setDisableArtworkLoading:(BOOL)arg1 ;
-(BOOL)disableArtworkLoading;
-(BOOL)includeCleanTracksOnly;
-(BOOL)isAutomaticUpdate;
-(void)setIsAutomaticUpdate:(BOOL)arg1 ;
-(NSString *)referer;
-(void)setReferer:(NSString *)arg1 ;
-(NSDictionary *)resultingOverrideBagDictionary;
@end
